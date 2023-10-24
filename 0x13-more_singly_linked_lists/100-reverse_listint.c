#include "lists.h"

/**
* reverse_listint -that reverses a listint_t linked list.
* @head: pointer to head pointer
* Return:a pointer to the first node of the reversed list
*/
listint_t *reverse_listint(listint_t **head)
{
listint_t *prev, *tmp, *new;
if (head == NULL || *head == NULL)
return (NULL);
prev = NULL;
tmp = *head;
new = *head;
while (new != NULL)
{
new = new->next;
tmp->next = prev;
prev = tmp;
tmp = new;
}
*head = prev;
return (*head);
}
