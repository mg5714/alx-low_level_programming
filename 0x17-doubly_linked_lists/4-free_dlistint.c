#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list.
 * @head: pointer to the list.
 *
 * Return: void
 **/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *new;
	while (head)
	{
		new = head;
		head = head->next;
		free(new);
	}
}
