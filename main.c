#include "biblio.h"

static int	ft_check_theme_Error(int n)
{
	if (n != 1 && n != 2)
		return (1);
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc == 2 && strcmp(argv[1], "--add") == 0)
	{
		ft_add_book();
		return 0;
	}
	int	theme;
	int	age = 0;

    printf("Choix de theme\n1.Romance\n2.Dark Fantasy\n");
    scanf("%d", &theme);
	if (ft_check_theme_Error(theme) == 1)
		printf("Choix du theme incorrect.\nFermeture du programme...\n");
    if (theme == 1) /*Romance*/
    {
    	printf("Vous avez choisi 'Romance'.\n");
		printf("Choisissez une tranche d'age : \n1. 5-10 ans\n2. 11-15 ans\n3. 16 ans et plus\n");
		scanf("%d", &age);
		if (age != 1 && age != 2 && age != 3)
		{
			printf("Choix de la tranche d'age incorrect.\nFermeture du programme...\n");
			return (1);
		}
		ft_romance(age);
    }
    else if (theme == 2) //Dark Fantasy
	{
    	printf("Vous avez choisi 'Dark Fantasy'.\n");
		printf("Choisissez une tranche d'age : \n1. 5-10 ans\n2. 11-15 ans\n3. 16 ans et plus\n");
		scanf("%d", &age);
		if (age != 2 && age != 3)
		{
			printf("Choix de la tranche d'age incorrect.\nFermeture du programme...");
			return (1);
		}
		else
			ft_darkfantasy(age);
    }
	return 0;
}