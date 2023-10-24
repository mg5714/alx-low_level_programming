#include "lists.h"

/**
* delete_nodeint_at_index - a function that deletes the node at index
* @head: pointer to head pointer
* @index: index for new node
* Return:1 if it succeeded, -1 if it failed.
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *node, *tmp = *head;
unsigned int i;
if (tmp == NULL)
return (-1);
if (index == 0)
{
tmp = tmp->next;
free(tmp);
return (1);
}
for (i = 0; i < index  - 1; i++)
{
if (tmp == NULL)
return (-1);
tmp = tmp->next;
}
node = tmp->next;
tmp->next = node->next;
free(node);
return (1);
}
