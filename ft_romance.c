#include "biblio.h"

static void	ft_database1(void)
{
	t_node *head = NULL;

	/* Kilari */
	t_node *livre1 = ft_create_node("Kilari", "Romance", "7 - 10 and et plus");
	ft_add_node(&head, livre1);
	
	printf("Affichage des livres correspondants :\n\n");
	ft_display_node(head);
}

static void	ft_database2(void)
{
	t_node *head = NULL;

	/* Horimiya */
	t_node *livre1 = ft_create_node("Horimiya", "Romance", "A partir de 10 ans");
	ft_add_node(&head, livre1);
	
	/* La Maison du Soleil */
	t_node *livre2 = ft_create_node("La Maison du Soleil", "Romance", "A partir de 12 ans");
	ft_add_node(&head, livre2);

	/*Display books from linked list.*/
	printf("Affichage des livres correspondants :\n\n");
	ft_display_node(head);
}

void	ft_romance(int age)
{
	if (age == 1)
		ft_database1();
	if (age == 2)
		ft_database2();

}