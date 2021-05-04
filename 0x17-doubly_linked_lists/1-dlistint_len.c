#include "lists.h"
/**
* dlistint_len - function
* @h: pointer to head node of list
*
* Description: function to return number of elements in a lnkd list
* Return: Number of elements
*/

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *tmp = h;
	size_t n = 0;

	while (tmp != NULL)
	{
		tmp = tmp->next;
		n++;
	}
	return (n);
}
