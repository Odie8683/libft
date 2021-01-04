#include "../include/libft.h"

char *ft_strchr(const char *str, int c){
	size_t i;

	i = 0;
	while(*(str + i) != c && *(str + i))
		i++;
	if (*(str + i) == c)
		return ((char *)str + i);
	else
		return NULL;
}
