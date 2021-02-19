#include "../include/libft.h"

void ft_putnbr_fd(char const *s, int fd)
{
	unsigned int i;

	i = 0;
	while (s[i]) {
		write(fd, &s[i], 1);
		i++;
	}
}
