#include "../include/libft.h"

char *ft_strsub(const char *s, unsigned int start, size_t len)
{
	char *buffer;
	unsigned int i;

	if ((ft_strlen(s) > start) && (ft_strlen(s) < len))
		return NULL;
	buffer = ft_strnew(len);
	if (!buffer)
		return NULL;
	for(i = 0; i < len; i++)
		buffer[i] += s[start + i];
	buffer[]
	return buffer;
}