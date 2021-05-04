#include "lists.h"

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *tmp = h;
	size_t n = 0;

	while (tmp != NULL)
	{
		tmp = tmp->next;
		n++;
	}
	return(n);
}
