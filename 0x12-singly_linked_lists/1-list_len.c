#include "lists.h"
/**
* list_len - a function that returns the number
* of elements in a linked list_t list.
* @h: The list
* Return: num of nodes.
*/
size_t list_len(const list_t *h)
{
size_t len = 0;
while (h != NULL)
{
len++;
h = h->next;
}
return (len);
}
