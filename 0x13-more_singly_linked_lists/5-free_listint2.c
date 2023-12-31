#include "lists.h"

/**
* free_listint2 - a function that frees.
* @head: pointer to head pointer
* Return: void.
*/
void free_listint2(listint_t **head)
{
listint_t *current, *tmp;
if (head == NULL)
return;
tmp = *head;
while (tmp)
{
current = tmp;
tmp = tmp->next;
free(current);
}
*head = NULL;
}
