#include "../include/libft.h"

char **ft_strsplit(char const *s, char c)
{
	unsigned int i;

	i = 0;
	i = nb_words(s, c);

	printf("%u\n", i);
	return NULL;
}

unsigned int nb_words(const char *s, char c)
{
	unsigned int i;
	unsigned int j;
	unsigned int nb;

	i = 0;
	nb = 0;
	while (s[i]) {
		j = 0;
		while (s[i] == c)
			i++;
		while (s[i + j] != c) {
			j++;
		}
		if (j > 0)
			nb++;
		i += j;
	}
	return nb;
}