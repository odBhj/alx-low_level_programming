#include <stdio.h>
#include "lists.h"

/**
* print_list - Prints all the elements of a linked list
* @h: A pointer to the list_t list to print
*
* Return: The number of nodes printed
*/
size_t print_list(const list_t *h)
{
size_t num_nodes = 0;
const list_t *current_node = h;

while (current_node != NULL)
{
if (current_node->str == NULL)
printf("[0] (nil)\n");
else
printf("[%u] %s\n", current_node->len, current_node->str);

current_node = current_node->next;
num_nodes++;
}

return (num_nodes);
}
