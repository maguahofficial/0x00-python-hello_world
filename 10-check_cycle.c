#include "lists.h"

/**
 * check_cycle - function checks if a linked list contains a cycle
 * @list: The linked list to check
 * 10. Linked list cycle task python
 * Return: 1 if the list has a cycle, 0 if it doesn't
 */
int check_cycle(listint_t *list)
{
	listint_t *slowvariable = list;
	listint_t *fastvariable = list;

	if (!list)
		return (0);

	while (slowvariable && fastvariable && fastvariable->next)
	{
		slowvariable = slowvariable->next;
		fastvariable = fastvariable->next->next;
		if (slowvariable == fastvariable)
			return (1);
	}

	return (0);
}
