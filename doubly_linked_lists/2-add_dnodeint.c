#include "lists.h"
/**
*
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *nnode = malloc(sizeof(dlistint_t));

if (nnode == NULL)
return (NULL);

nnode->n = n;
nnode->prev = NULL;
nnode->next = *head;

if (*head != NULL)
(*head)->prev = nnode;

*head = nnode;
return (nnode);
}
