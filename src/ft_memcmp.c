#include "../include/libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t i;
    char *temp1;
    char *temp2;

    i = 0;
    temp1 = (char *)s1;
    temp2 = (char *)s2;
    while (i < n) {
      if (*(temp1 + i) > *(temp2 + i) || *(temp1 + i) < *(temp2 + i) )
          return *(temp1 + i) - *(temp2 + i);
        i++;
    }
    return 0;
}
