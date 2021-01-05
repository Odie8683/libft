#include "../include/libft.h"

char *ft_strcpy(char *dest, const char *src)
{
	size_t i;

	for (i = 0; i < ft_strlen(src); i++)
		*(dest + i) = *(src + i);
	return dest;
}
