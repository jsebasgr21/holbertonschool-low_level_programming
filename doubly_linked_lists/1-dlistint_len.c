#include "lists.h"
/**
* dlistint_len - returns the number of elements in a linked dlistint_t list.
* @h: head of the list
* Return:  the number of elements in a linked dlistint_t list.
*/
size_t dlistint_len(const dlistint_t *h)
{
const dlistint_t *ptr = h;
size_t count = 0;

while (ptr != NULL)
{
count++;
ptr = ptr->next;
}
return (count);
}
