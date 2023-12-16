#include "lists.h"
/**
* free_list - frees a list_t list.
* @head: head of the list.
*/
void free_list(list_t *head)
{
list_t *ptr = head;

while (head != NULL)
{
head = head->next;
free(ptr->str);
free(ptr);
}
}
