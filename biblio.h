#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct s_livre 
{
        char titre[100];
        char theme[100];
        char age[100];
} t_livre;

typedef struct s_node
{
	t_livre livre;
	struct s_node *next;
} t_node;

int	main(int argc, char **argv);
void	ft_afficherLivre(t_livre livre);
void	ft_romance(int age);
void	ft_darkfantasy(int age);

t_node	*ft_create_node(char *titre, char *theme, char *age);
void	ft_add_node(t_node **head, t_node *new);
void	ft_display_node(t_node *head);
void	ft_add_book(void);