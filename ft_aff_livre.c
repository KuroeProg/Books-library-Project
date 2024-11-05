#include "biblio.h"

void	ft_afficherLivre(t_livre livre) 
{
	printf("====================================\n");
	printf("Titre : %s\n", livre.titre);
	printf("Theme : %s\n", livre.theme);
	printf("Age conseille : %s\n", livre.age);
	printf("====================================\n\n"); 
}