#include "../include/libft.h"

void *ft_memalloc(size_t size)
{
	void *new_buffer;

	new_buffer = malloc(size);
	if (!new_buffer)
		return NULL;
	ft_bzero(new_buffer, size);
	return new_buffer;
}