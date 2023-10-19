#include "lists.h"

/**
* add_node - a function that adds a new node at the end of a list_t list.
* @head: pointer to head pointer
* @str: node data
* Return: the address of the new element, or NULL if it failed
*/
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_node = malloc(sizeof(list_t));
list_t *last_node = *head;
if (new_node == NULL)
return (NULL);
new_node->str =strdup(str);
new_node->len = strlen(str);
new_node->next = NULL;
if (*head == NULL)
{
*head = new_node;
return (new_node);
}
while (current->next != NULL)
last_node = last_node->next;
last_node->next = new_node;
return (new_node);
}
