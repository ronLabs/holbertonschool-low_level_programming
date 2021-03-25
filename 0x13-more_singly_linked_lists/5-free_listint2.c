#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list.
 * @head:pointer value.
 * Return:Nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *node;

	if (head)
	{
		if (*head)
		{
			while (*head != NULL)
			{
				node = *head;
				*head = (*head)->next;
				free(node);
			}
		}
		*head = NULL;
	}
}
