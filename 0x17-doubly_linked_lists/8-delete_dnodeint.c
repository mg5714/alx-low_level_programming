#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a dlistint_t list.
 * @head: pointer
 * @index: index of the node to delete.
 * Return: 1 if it succeeded, -1 if it failed.
 **/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int i = 0;

	if (!head || !*head)
		return (-1);
	if (index == 0)
	{
		if ((*head)->next)
			(*head)->next->prev = NULL;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (temp && i < index - 1)
	{
		temp = temp->next;
		i++;
	}

	if (!temp || i != index - 1)
		return (-1);
	if (temp->next)
		temp->next->prev = temp->prev;
	if (temp->prev)
		temp->prev->next = temp->next;

	free(temp);
	return (1);
}
