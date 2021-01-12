#include "../include/libft.h"

char *ft_strtrim(char const *s)
{
  char *buffer;
  int status;
  unsigned int i;
  unsigned int j;

  buffer = (char *)malloc(sizeof(char) * ft_strlen(s));
  if (!buffer)
    return NULL;
  i = 0;
  j = 0;
  while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
    i++;
  while (s[i]) {
    status = 0;
    while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t'){
      i++;
      status++;
    }
    if (status)
      buffer[j++] = ' ';
    buffer[j++] = s[i++];
  }
  buffer[j] = '\0';
  return buffer;
}
