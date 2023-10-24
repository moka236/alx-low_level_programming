#include "lists.h"

/**
 * pop_listint - deletes the head node of
 * a linked list
 * @head: head of a list.
 *
 * Return: head node's data.
 */
int pop_listint(listint_t **head)
{
	int fnode;
	listint_t *he;
	listint_t *cur;

	if (*head == NULL)
		return (0);

	cur = *head;

	fnode = cur->n;

	he = cur->next;

	free(cur);

	*head = he;

	return (fnode);
}
