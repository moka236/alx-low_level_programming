#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of
 * a linked list.
 * @head: head of a list.
 *
 * Return: sum of all the data (n).
 */
int sum_listint(listint_t *head)
{
	int summ;

	summ = 0;
	while (head != NULL)
	{
		summ += head->n;
		head = head->next;
	}

	return (summ);
}
