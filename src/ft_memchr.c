#include "../include/libft.h"

void *ft_memchr(void *s, int c, size_t n)
{
	size_t i;
	unsigned char *temp;

	temp = s;
	i = 0;
	while ((*(temp + i) != c) && (i < n))
		i++;
	if (*(temp + i) == c)
		return (s + i);
	return NULL;
}
