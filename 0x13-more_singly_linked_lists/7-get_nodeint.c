#include "lists.h"

/**
* get_nodeint_at_index - a function returns the nth node of a listint_t
* @head: pointer to the node.
* @index: index of the node.
* Return: pointer.
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int count = 0;
while (head != NULL && count < index)
{
head = head->next;
count++;
}
if (count == index)
{
return (head);
}
return (NULL);
}
