#include "../include/libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
  unsigned char *temp1;
  unsigned char *temp2;

  size_t i;

  temp1 = (unsigned char *)src;
  temp2 = dest;
  i = 0;
  for (i = 0; i < n; i++)
    *(temp2 + i) = *(temp1 + i);
  return dest;
}
