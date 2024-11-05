#include "biblio.h"

/*new node*/
t_node	*ft_create_node(char *titre, char *theme, char *age)
{
	t_node *new = (t_node *)malloc(sizeof(t_node));
	strcpy(new->livre.titre, titre);
	strcpy(new->livre.theme, theme);
	strcpy(new->livre.age, age);
	new->next = NULL;
	return new;
}
