#include "../include/libft.h"

void ft_memdel(void **ap)
{
	free(*ap);
	*ap = NULL;
}