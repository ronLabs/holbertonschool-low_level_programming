#include "lists.h"

/**
 * listint_t - function that adds a new node at the end
 * @head: listint type
 * @n: number to add
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *end, *tmp_node;

	end = malloc(sizeof(listint_t));
	if (end == NULL)
	{
		return (NULL);
	}
	end->n = n;
	end->next = NULL;

	if (*head == NULL)
		*head = end;
	else
	{
		tmp_node = *head;
		while (tmp_node->next != NULL)
			tmp_node = tmp_node->next;
		tmp_node->next = end;
	}
return (end);
}
