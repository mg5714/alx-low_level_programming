#include "lists.h"
/**
* add_node - a function that adds a new node at the beginning of a list_t list.
* @head: pointer to head pointer
* @str: node data
* Return: the address of the new element, or NULL if it failed
*/
list_t *add_node(list_t **head, const char *str)
{
if (head == NULL)
return (NULL);
list_t *newnode = malloc(sizeof(list_t));
if (newnode == NULL)
return (NULL);
newnode->str = strdup(str);
if (newnode->str == NULL)
{
free(newnode);
return (NULL);
}
newnode->next = *head;
*head = newnode;
return (newnode);
}
