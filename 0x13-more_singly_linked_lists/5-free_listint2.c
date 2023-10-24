#include "lists.h"

/**
* free_listint2 - a function that frees.
* @head: pointer to head pointer
* Return: void.
*/
void free_listint2(listint_t **head)
{
listint_t *current;
listint_t *tmp = *head;
if (head == NULL)
return;
while (tmp != NULL)
{
current = tmp;
tmp = tmp->next;
free(current);
}
head = NULL;
}
