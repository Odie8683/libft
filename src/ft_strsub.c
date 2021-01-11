#include "../include/libft.h"

char *ft_strsub(const char *s, unsigned int start, size_t len)
{
	unsigned int i;
	char *buffer;

	buffer = (char *)malloc(sizeof(char) *len + 1);
	if (!buffer)
		return NULL;
	if (start > ft_strlen(s) || len > ft_strlen(s))
		return NULL;
	for (i = 0; i < len; i++) {
		buffer[i] = s[start + i];
	}
	buffer[i] = '\0';
	return buffer;
}
