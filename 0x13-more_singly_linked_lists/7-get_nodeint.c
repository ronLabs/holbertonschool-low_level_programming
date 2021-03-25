#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node
 * @head:pointer value.
 * @index: value.
 * Return: node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	unsigned int a = 0;

	node = head;
	while (a < index && node != NULL)
	{
		node = node->next;
		a++;
	}
	if (a != index)
	{
		return (NULL);
	}
	return (node);
}
