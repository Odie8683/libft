#include "../include/libft.h"

void ft_lstadd(t_list **alst, t_list *new)
{
	t_list *temp;

	if (!*alst)
		return;
	temp = *alst;
	new->next = temp;
	*alst = new;
}
