#include "lists.h"

/**
* find_listint_loop - a function that finds the loop in a linked list.
* @head: pointer to head pointer
* Return: The address of the node where the loop starts,
* or NULL if there is no loop
*/
listint_t *find_listint_loop(listint_t *head)
{
listint_t *node, *tmp;
if (head == NULL)
return (NULL);
node = *head;
tmp = *head;
while (node && tmp && tmp->next)
{
node = node->next;
tmp = tmp->next->next;
if (node == tmp)
return (node);
}
return (NULL);
}
