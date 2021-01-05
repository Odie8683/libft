#include "../include/libft.h"

void *ft_memccpy(void *dest, void *src, int c, size_t n)
{
    size_t i;
    unsigned char *temp1;
    unsigned char *temp2;

    temp1 = (unsigned char *)src;
    temp2 = dest;
    i = 0;
    while (i < n && *(temp1 + i) != c) {
        *(temp2 + i) = *(temp1 + i);
        i++;
    }
    if (i == n)
        return NULL;
    *(temp2 + i) = *(temp1 + i);
    return (dest + i);
}
