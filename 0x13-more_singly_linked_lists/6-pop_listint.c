#include "lists.h"

/**
* pop_listint - a function that deletes the head node of a listint_t
* @head: pointer to head pointer
* Return: head node’s data.
*/
int pop_listint(listint_t **head)
{
listint_t *tmp;
int data;
if (head == NULL)
return (0);
tmp = *head;
data = (*head)->n;
*head = (*head)->next;
free(tmp);
return (data);
}
