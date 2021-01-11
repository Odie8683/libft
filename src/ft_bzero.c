#include "../include/libft.h"

void ft_bzero(void *s, size_t n)
{
	unsigned char *temp;

	temp = (unsigned char *)s;
	while (n) {
	*(temp + n) = '\0';
		n--;
	}
}
