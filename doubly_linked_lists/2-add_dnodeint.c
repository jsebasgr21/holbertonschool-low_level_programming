#include "lists.h"
/**
* add_dnodeint - adds a new node at the beginning of a dlistint_t list
* @head: head of the list
* @n: value of the element
* Return: the address of the new element, or NULL if it failed
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
