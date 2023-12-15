#include "lists.h"
/**
 * add_node - function that adds a new node at the beginning of a list_t list.
 * @head: head of the linked list
 * @str: string
 * Return: pointer to the new node
*/
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
