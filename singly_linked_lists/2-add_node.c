#include "lists.h"
list_t *add_node(list_t **head, const char *str)
{
list_t *node;
size_t nc;

node = malloc(sizeof(list_t));

if (node == NULL)
return (NULL);

node->str = strdup(str);

nc = strlen(str);

node->len = nc;
node->next = *head;
*head = node;

return (*head);
}
