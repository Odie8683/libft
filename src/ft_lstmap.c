#include "../include/libft.h"

t_list *ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
    t_list *new_lst;

    while (lst) {
        new_lst = f(lst);
        if (!new_lst)
            return NULL;
        new_lst = new_lst->next;
        lst = lst->next;
    }
    return new_lst;
}