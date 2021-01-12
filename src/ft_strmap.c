#include "../include/libft.h"

char *ft_strmap(char const *s, char (*f)(char))
{
  int i;
  char *buffer;

  buffer = ft_strnew(ft_strlen(s));
  if (!buffer)
    return buffer;
  ft_memset(buffer, '\0', ft_strlen(s));
  i = 0;
  if (s && f) {
    while (s[i]){
      buffer[i] = f(s[i]);
      i++;
    }
  }
  buffer[i] = '\0';
  return buffer;
}
