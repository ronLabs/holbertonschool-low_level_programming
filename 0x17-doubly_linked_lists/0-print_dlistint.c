#include "lists.h"

/**
* print_dlistint - function
* @h: string to print
*
* Description: Function to print all elements in dlistint_t list
* Return: number of nodes
*/

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *tmp = h;
	size_t n = 0;

	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
		n++;
	}
	return (n);
}
