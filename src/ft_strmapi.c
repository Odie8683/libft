#include "../include/libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
  unsigned int i;
  char *buffer;

  buffer = ft_strnew(ft_strlen(s) + 1);
  if (!buffer)
    return buffer;
  ft_memset(buffer, '\0', ft_strlen(s));
  i = 0;
  if (s && f) {
    while (i < ft_strlen(s)){
      buffer[i] = f(i, s[i]);
      i++;
    }
  }
  return buffer;
}
