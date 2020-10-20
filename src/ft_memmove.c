#include "../include/libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
  size_t i;
  unsigned char *temp;
  unsigned char cp_src[n];

  temp = dest;
  ft_memcpy(cp_src, src, n);
  for (i = 0; i < n; i++)
    *(temp + i) = *(cp_src + i);
  return dest;
}
