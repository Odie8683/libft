#include "../include/libft.h"

void ft_putnbr_fd(int n, int fd)
{
	unsigned int size;

	size = ft_strlen(ft_itoa(n));
	write(fd, ft_itoa(n), size);
}
