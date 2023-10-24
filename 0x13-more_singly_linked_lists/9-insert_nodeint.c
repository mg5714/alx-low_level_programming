#include "lists.h"

/**
* insert_nodeint_at_index - a function that inserts a new node at
* a given position.
* @head: pointer to head pointer
* @idx: index for new node
* @n: the new node value
* Return:address of the new node, or NULL if it failed
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new_node = malloc(sizeof(listint_t));
listint_t *tmp = *head;
unsigned int i = 0;
if (new_node = NULL)
return (NULL);
new_node->n = n;
new_node->next = NULL;
if (idx == 0)
{
new_node->next = tmp;
*head = new_node;
return (new_node);
}
while (i < idx - 1)
{
if (tmp == NULL)
return (NULL);
tmp = tmp->next;
i++;
}
new_node->next = tmp->next;
tmp->next = new_node;
return (new_node);
}
