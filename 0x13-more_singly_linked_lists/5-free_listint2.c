#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: pointer to the first node
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp, *new;

	if (head != NULL)
	{
		new = *head;
		while ((tmp = new) != NULL)
		{
			new = new->next;
			free(tmp);
		}
		*head = NULL;
	}
}
