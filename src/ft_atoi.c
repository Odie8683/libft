#include "../include/libft.h"
#include <stdio.h>

int ft_atoi(const char *str)
{
	int i;
	int unit;
	int nbr;

	if (ft_isalpha(str[1]))
		return 0;
	nbr = 0;
	unit = 0;
	i = 0;
	while (ft_isdigit(str[i])){
		unit *= 10;
		i++;
	}
	printf("%d\n",unit);
	i = 0;
	while (str[i]) {
		if (ft_isalpha(str[i]))
			return nbr;
		nbr = (str[i] - '0') * unit + nbr;
		unit /= 10;
		i++; 
	}
	return nbr;
}
