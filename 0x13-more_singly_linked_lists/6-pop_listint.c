#include "lists"

/**
 * pop_listint - Delete the first head node of  linked list.
 * @head: Pointer to a list.
 * Return: Integer if success.
 * or 0 if list is empty
 **/

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if ((head ||*head) == NULL)
		return (0);

	temp = (*head);
	*head = (temp)->next;
	num = (temp)->n;
	free(temp);
	return (num);
}
