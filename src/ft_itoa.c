#include "../include/libft.h"

static unsigned int nb_size(int n)
{
	unsigned int i;
	i = 0;
	if (n < 0)
		n *= -1;

	while (n) {
		n /= 10;
		i++;
	}
	return i;
}

static void reverse_str(char *s1, char *s2)
{
	int i, j;

	i = 0;
	j = ft_strlen(s1);

	if (s1[j - 1] == '-')
		j -= 1;
	else
		j -= 2;

	while (j >= 0) {
		s2[i] = s1[j];
		i++;
		j--;
	}
	s2[i + 1] = '\0';
}

char *ft_itoa(int n)
{
	char *nb;
	char temp[30];
	unsigned long size;
	int unsigned i;

	size = (unsigned long)nb_size(n);
	nb = (char *)malloc(sizeof(char) * size + 1);
	if (!nb)
		return NULL;
	if (n < 0){
		n *= -1;
		temp[size] = '-';
	}
	i = 0;
	while (n > 0) {
		temp[i] = n % 10 + '0';
		n /= 10;
		i++;
	}
	temp[i + 1] = '\0';
	reverse_str(temp, nb);
	return nb;
}
