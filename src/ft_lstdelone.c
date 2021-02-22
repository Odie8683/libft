#include "../include/libft.h"

void ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	t_list *temp;

	temp = *alst;
	*alst = temp->next;
	del(temp, sizeof(t_list));
	*alst = temp;
	free(temp);
	temp = NULL;	
} 