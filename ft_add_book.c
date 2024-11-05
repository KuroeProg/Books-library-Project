#include "biblio.h"

static void ft_dynamic_add(t_node **head)
{
	char titre[100];
	char theme[100];
	char age[100];

	printf("Saisir le titre du livre: ");
	fgets(titre, sizeof(titre), stdin);
	titre[strcspn(titre, "\n")] = 0;

	printf("Saisir le theme du livre: ");
	fgets(theme, sizeof(theme), stdin);
	theme[strcspn(theme, "\n")] = 0;

	printf("Saisir la tranche d'age )ex : 'A partir de 10 ans'): ");
	fgets(age, sizeof(age), stdin);
	age[strcspn(age, "\n")] = 0;

	t_node *new_book = ft_create_node(titre, theme, age);
	ft_add_node(head, new_book);
}


void	ft_add_book(void)
{
	t_node *head = NULL;
	char choix[10];

	while(1)
	{
		printf("\nVoulez vous ajouter un livre? (oui/non) : ");
		fgets(choix, sizeof(choix), stdin);
		choix[strcspn(choix, "\n")] = 0;

		if (strcmp(choix, "oui") == 0)
			ft_dynamic_add(&head);
		else if (strcmp(choix, "non") == 0)
			break;
		else
			printf("Veuillez entrer 'oui' ou 'non.\n");
	
		printf("\nAffichage des livres ajoutes : \n\n");
		ft_display_node(head);
	}
}