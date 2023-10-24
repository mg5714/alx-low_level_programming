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
unsigned int i = 0;
if (tmp == NULL)
return (-1);
if (index == 0)
{
tmp = tmp->next;
free(tmp);
return (1);
}
while (i < index  - 1)
{
if (tmp == NULL)
return (-1);
tmp = tmp->next;
i++;
}
tmp->next = node->next;
free(node);
return (1);
}
