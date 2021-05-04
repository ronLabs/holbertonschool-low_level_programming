#include "lists.h"

/**
* add_dnodeint_end - function
* @head: double pointer to first node of list
* @n: new node's data
*
* Description: function to add new node at end of dbl lnkd list
* Return: address of new element, or NULL if fail
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;
	dlistint_t *tmp = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return NULL;
	
	new->n = n;
	new->next = NULL;
	
	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
	while (tmp->next != NULL)
	{
		/*aquí nos colocamos en el último nodo*/
		tmp = tmp->next;
	}
	new->prev = tmp;
	tmp->next = new;

	return (new);
}
