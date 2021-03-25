#include "lists.h"

/**
 * free_listint - function that frees a listint_t list
 * @head: value
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
	listint_t *node;

	while (head != NULL)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
