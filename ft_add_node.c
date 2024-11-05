#include "biblio.h"

void	ft_add_node(t_node **head, t_node *new)
{
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		t_node *temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new; 
	}
}
