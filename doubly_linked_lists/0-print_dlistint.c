#include "lists.h"
/**
* print_dlistint - prints all the elements of a dlistint_t list.
* @h: head of the list.
* Return: the number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
const dlistint_t *ptr = h;
size_t count = 0;

while (ptr != NULL)
{
printf("%d\n", ptr->n);
count++;
ptr = ptr->next;
}
return (count);
}
