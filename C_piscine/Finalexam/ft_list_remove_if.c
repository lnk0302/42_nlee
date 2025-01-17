#include <stdlib.h>
#include <unistd.h>
#include "ft_list.h"

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list *temp;

	if (*begin_list)
	{
		if (!cmp((*begin_list)->data, data_ref))
		{
			temp = *begin_list;
			*begin_list = (*begin_list)->next;
			free(temp);
			ft_list_remove_if(begin_list, data_ref, cmp);
		}
		else
			ft_list_remove_if(&(*begin_list)->next, data_ref, cmp);
	}
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		write(1, &*str, 1);
		str++;
	}
}

void	print_list(t_list *list)
{
	while (list)
	{
		ft_putstr(list->data);
		ft_putstr("\n");
		list = list->next;
	}
}

int	cmp(char *elem1, char *elem2)
{
	int	i;

	i = 0;
	while (elem1[i] != '\0' && elem2[i] != '\0' && elem1[i] == elem2[i])
		i++;
	if (elem1[i] == elem2[i])
		return (0);
	return (1);
}

int	main(void)
{
	t_list *whine_list = malloc(sizeof(t_list));
	
	whine_list -> data = "C sucks";
	whine_list -> next = malloc(sizeof(t_list));
	whine_list -> next -> data = "Python is pitiful";
	whine_list -> next -> next = malloc(sizeof(t_list));
	whine_list -> next -> next -> data = "Ruby's raunchy";
	whine_list -> next -> next -> next = malloc(sizeof(t_list));
	whine_list -> next -> next -> next -> data = "Wish I was using lisp lists";
	whine_list -> next -> next -> next -> next = NULL;

	ft_list_remove_if(&whine_list, "C sucks", &cmp);
	print_list(whine_list);
	return (0);
}
