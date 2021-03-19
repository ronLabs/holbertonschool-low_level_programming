#include "lists.h"

/**
 * print_list -  Print the elements of the linked list
 * @h: value
 * Return: number of elements
 */
size_t print_list(const list_t *h)
{
	int node;

	for (node = 0; h != NULL; node++)
	{
		if (h->str == NULL)
			printf("[0] (nill)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (node);
}
