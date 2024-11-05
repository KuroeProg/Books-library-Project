#include "biblio.h"

void	ft_database2(void)
{
	t_node *head = NULL;

	printf("Affichage des livres correspondants:\n\n");
	ft_display_node(head);
}

void	ft_database3(void)
{
	t_node *head = NULL;

	t_node *livre1 = ft_create_node("Berserk", "Dark Fantasy, Mature", "A partir de 16 ans");
	ft_add_node(&head, livre1);

	printf("Affichage des livres correspondants:\n\n");
	ft_display_node(head);
}


void	ft_darkfantasy(int age)
{
	if (age == 2)
		ft_database2();
	if (age == 3)
		ft_database3();
}