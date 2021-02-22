#include "../include/libft.h"

void ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *temp;
	
	while (*alst != NULL) {
		temp = *alst;
		temp = temp->next;
		del(*alst, sizeof(t_list));
		*alst = temp;
	}
	temp = NULL;
}