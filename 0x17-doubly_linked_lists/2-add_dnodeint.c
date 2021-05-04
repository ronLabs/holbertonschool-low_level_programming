#include "lists.h"
/**
* add_dnodeint - function
* @head: double pointer to first node
* @n: new node data to add
*
* Description: function to add new node to beginning of dbl lnkd list
* Return: Address of new element
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;

	new = malloc(sizeof(dlistint_t));
	if (new != NULL)
	{
		new->n = n;
		new->next = *head;
		new->prev = NULL;
		if (*head != NULL)
			(*head)->prev = new;
		*head = new;
	}
	return (new);
}


