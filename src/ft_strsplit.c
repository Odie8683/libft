#include "../include/libft.h"

static int nb_word(char *s, char c)
{
	size_t i, j;
	int words;

	i = 0;
	words = 0;
	while(s[i] != '\0') {
		j = 0;
		while (s[i + j] != c)
			j++;
		if (j > 0) {
			words += 1;
			i += j;
		}else
			i++;
	}
	return words;
}

char **ft_strsplit(char const *s, char c)
{
	char **tab_str;
	size_t i, j, k, l;
	int size;

	size = nb_word((char *)s, c);
	tab_str = (char **)malloc(sizeof(char *) * (size_t)nb_word);
	if (!tab_str)
		return NULL;
	i = 0;
	l = 0;
	while (s[i] != '\0') {
		j = 0;
		while (s[i + j] != c)
			j++;
		if (j == 0) {
			i++;
			continue;
		}
		tab_str[l] = (char *)malloc(sizeof(char) * j);
		k = 0;
		while (s[i + k] != c){
			tab_str[l][k] = s[i + k];
			k++;
		}
		tab_str[l][k] = '\0';
		i+= j;
		l++;
	}
	tab_str[l] = NULL;
	return tab_str;
}
