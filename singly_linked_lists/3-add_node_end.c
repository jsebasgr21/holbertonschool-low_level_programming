#include "lists.h"
/**
 * 
*/
list_t *add_node_end(list_t **head, const char *str)
{
list_t *nnode = malloc(sizeof(list_t)), *lnode;
size_t nc = strlen(str);


if (nnode == NULL)
return (NULL);

nnode->str = strdup(str);

nnode->len = nc;
nnode->next = NULL;
lnode = *head;

if (lnode == NULL)
*head = nnode;

else
{
while (lnode->next != NULL)
lnode = lnode->next;
lnode->next = nnode;
}

return (*head);
}
