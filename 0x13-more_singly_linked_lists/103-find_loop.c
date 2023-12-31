#include "lists.h"

/**
* find_listint_loop - a function that finds the loop in a linked list.
* @head: pointer to head pointer
* Return: The address of the node where the loop starts,
* or NULL if there is no loop
*/
listint_t *find_listint_loop(listint_t *head)
{
listint_t *node = head, *tmp = head;
if (head == NULL)
return (NULL);
while (node && tmp && tmp->next)
{
node = node->next;
tmp = (tmp->next)->next;
if (node == tmp)
{
node = tmp;
while (node != tmp)
{
node = node->next;
tmp = tmp->next;
}
return (node);
}
}
return (NULL);
}
