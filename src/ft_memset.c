#include "../include/libft.h"

void	*ft_memset(void *ptr, int value, size_t num)
{
	size_t i;
	unsigned char *temp;

	temp = ptr;
	for (i = 0; i < num; i++) {
		*temp = value;
		temp++;
	}
	return ptr;
}
