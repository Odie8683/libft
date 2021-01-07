#include "../include/libft.h"

int ft_atoi(const char *str)
{
	int i;
	int nbr;
	int unit;

	if (ft_isalpha(str[1]))
		return 0;
	nbr = 0;
	unit = 1;
	i = 0;
	while (ft_isdigit(str[i + 1])){
		unit *= 10;
		i++;
	}
	i = 0;
	while (ft_isdigit(str[i])) {
		nbr = (str[i] - '0') * unit + nbr;
		unit /= 10;
		i++;
	}
	return nbr;
}
