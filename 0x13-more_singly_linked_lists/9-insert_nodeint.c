#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new node at a given position
 * @head:pointer value.
 * @idx: unsigned int value.
 * @n: int value
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *tmp = *head;
	unsigned int count = 0;

	node = malloc(sizeof(listint_t));
	if (!node)
		return (NULL);
	node->n = n;
	if (idx == 0)
	{
		node->next = tmp;
		*head = node;
		return (node);
	}
	while (count < (idx - 1))
	{
		if (!tmp)
		{
			free(node);
			return (NULL);
		}
		count++;
		tmp = tmp->next;
	}
	node->next = tmp->next;
	tmp->next = node;
	return (node);
}
