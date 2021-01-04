#include "../include/libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t size){
	size_t i;
	size_t j;

	i = 0;
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
