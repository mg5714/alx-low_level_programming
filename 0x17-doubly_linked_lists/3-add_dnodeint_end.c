#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: pointer to head of the list.
 * @n: int the new node.
 * Return: address, or NULL
 **/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
    
        dlistint_t *new = malloc(sizeof(dlistint_t));
        dlistint_t *last = *head;

        if (!new)
		return (NULL);

        new->n = n;
        new->next = NULL;

        if (!*head)
	{
		new->prev = NULL;
		*head = new;
		return (new);
        }

        while (last->next)
		last = last->next;
        new->prev = last;
        last->next = new;

        return (new);
}
