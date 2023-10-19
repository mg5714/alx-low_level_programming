list_t *add_node(list_t **head, const char *str){
struct list_t* new = malloc(sizeof(struct list_t));
new->str = str;
new->next = *head;
(*head) = new ;
}
