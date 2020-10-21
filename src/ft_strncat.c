#include "../include/libft.h"

char *ft_strncat(char *dest, const char *src, size_t n)
{
	size_t i;
	size_t str_size;

	i = 0;
	str_size = ft_strlen(dest);
	while(i < n) {
		*(dest + str_size + i) = *(src + i);
		i++;
	}
	return dest;
}