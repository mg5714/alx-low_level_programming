#include "lists.h"
/**
* listint_len - a function returns the number of elements in a linked
* list_t list.
* @h: The list
* Return: num of element.
*/
size_t listint_len(const listint_t *h)
{
size_t len = 0;
while (h)
{
len++;
h = h->next;
}
return (len);
}
