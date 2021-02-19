#include "../include/libft.h"

void ft_putendl(char const *s)
{
	unsigned int i;

	i = 0;
	while (s[i]) {
		write(1, &s[i], 1);
		i++;
	}
	write(1, "\n", 1);
}
