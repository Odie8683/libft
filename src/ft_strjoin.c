#include "../include/libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
  char *buffer;
  unsigned int i;
  unsigned int size_s1;
  unsigned int size_s2;

  size_s1 = ft_strlen(s1);
  size_s2 = ft_strlen(s2);
  buffer = (char *)malloc(sizeof(char) *(size_s1 + size_s2));
  if (!buffer)
    return NULL;
  for (i = 0; i < size_s1; i++)
    buffer[i] = s1[i];
  for (i = 0; i < size_s2; i++)
    buffer[i + size_s1] = s2[i];
  buffer[size_s1 + size_s2] = '\0';
  return buffer;
}
