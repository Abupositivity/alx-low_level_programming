#include "lists.h"

/**
 * free_list - releases list_t memory.
 * @head: head of node.
 */

void free_list(list_t *head)
{
if (head)
{
free_list(head->next);
if (head->str)
free(head->str);
free(head);
}
}
