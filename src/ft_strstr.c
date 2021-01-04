#include "../include/libft.h"

char *ft_strstr(const char *haystack, const char *needle){
	size_t i;
	size_t j;
	size_t size;

	i = 0;
	size = ft_strlen(needle);
	while (haystack[i]){
		j = 0;
		while (haystack[i + j] == needle[j] && j < size)
			j++;
		if (j == size)
			return ((char *)haystack + i);
		i++;
	}
	return NULL;
}
