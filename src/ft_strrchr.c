#include "../include/libft.h"

char *ft_strrchr(char *str, int c)
{
	size_t i;
	size_t temp;

	temp = 0;
	i = 0;
	while(*(str + i)){
		if (*(str + i) == c)
			temp = i;
		i++;
	}
	if (temp == 0)
		return NULL;
	return (str + temp);
}
