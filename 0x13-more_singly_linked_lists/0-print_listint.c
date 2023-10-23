#include "lists.h"

/**
* print_listint - a function that prints all the elements
* @h: pointer to f node
* Return: num of nodes
*/
size_t print_listint(const listint_t *h)
{
size_t co = 0;
while (h)
{
printf("%d\n", h->n);
h = h->next;
co++;
}
return (co);
}
