#include <stdlib.h>
#include "lists.h"

/**
* list_len - Returns the number of elements in a linked list
* @h: A pointer to the list_t list
*
* Return: The number of elements in h
*/
size_t list_len(const list_t *h)
{
size_t num_elements = 0;
const list_t *current_node = h;

while (current_node != NULL)
{
num_elements++;
current_node = current_node->next;
}

return (num_elements);
}
