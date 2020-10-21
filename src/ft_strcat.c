#include "../include/libft.h"

char *ft_strcat(char *dest, const char *src)
{
	size_t i;
	size_t str_size;

	i = 0;
	str_size = ft_strlen(dest);
	while(*(src + i)) {
		*(dest + str_size + i) = *(src + i);
		i++;
	}
	return dest;
}