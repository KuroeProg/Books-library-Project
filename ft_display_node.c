#include "biblio.h"

void	ft_display_node(t_node *head)
{
	t_node *current = head;
	while (current != NULL)
	{
		ft_afficherLivre(current->livre);
		current = current->next;
	}
}