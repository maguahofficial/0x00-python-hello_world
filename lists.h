/**
 * check_cycle - function checks if a linked list contains a cycle
 * @list: The linked list to check
 * List.hfile header file
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
root@e024474929d2:~/alx-higher_level_programming/0x00-python-hello_world# cat lists.h
#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>

/**
 * struct listint_s - function singly linked list
 * @nvariable: integer
 * @nextvariable: This points to the next node
 * LisT.H FILE HEADER FILE
 * Description: The singly linked list node structure
 */
typedef struct listint_s
{
	int nvariable;
	struct listint_s *nextvariable;
} listint_t;

size_t print_listint(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int nvariable);
void free_listint(listint_t *head);
int check_cycle(listint_t *list);

#endif

