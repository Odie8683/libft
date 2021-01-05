#include "../include/libft.h"

size_t ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t i;
	size_t j;

	j = 0;
	i = ft_strlen(dest);
	while (j < size || *(dest + i + j)){
		*(dest + i + j) = *(src + j);
		j++;
	}
	*(dest + i + j) = '\0';
	return i + j;
}
