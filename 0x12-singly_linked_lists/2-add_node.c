#include "lists.h"

/**
* add_node - a function that adds a new node at the beginning of a list_t list.
* @head: pointer to head pointer
* @str: node data
* Return: the address of the new element, or NULL if it failed
*/
list_t *add_node(list_t **head, const char *str)
{
int len;
list_t *newnode = malloc(sizeof(list_t));
if (head == NULL || newnode == NULL)
return (NULL);
newnode->str = strdup(str);
if (newnode->str == NULL)
{
free(newnode);
return (NULL);
}
for (len = 0; str[len];)
len++;
newnode->str = strdup(str);
newnode->len = len;
newnode->next = *head;
*head = newnode;
return (newnode);
}
