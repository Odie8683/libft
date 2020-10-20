#include "include/libft.h"
#include <stdio.h>
#include <string.h>

int main(void)
{
  char str[] = "Wesh les cousins";
  char str2[] = "Bonjour tous le monde!";
  int a = 23333333;
  char p[10];
  char *p2;
  char *p3;
  char buffer[80] = "World";

  ft_memset(str, '-', 4);
  ft_putstr(str);
  ft_putchar('\n');
  ft_bzero(p, 10);
	ft_strncpy(p, "Jordan Mpounza", 6);
	ft_putstr(p);
  ft_putchar('\n');
  ft_memmove(buffer + 1, buffer, 79);
  ft_putstr(buffer);
  ft_putchar('\n');
  p2 = (char *)ft_memchr(p, 'r', 6);
  if (p2 == NULL) {
    ft_putstr("No 'r' in this string\n");
    return 0;
  }
  ft_putstr(p2);
  ft_putchar('\n');
  if (ft_memcmp("Jordan", "Jordan", 6) == 0)
    ft_putstr("C'est identique\n");
    else
      ft_putstr("Ce n'est pas identique\n");
  printf("%ld\n",ft_strlen("jordan"));
  p3 = ft_strdup(str2);
  ft_putstr(p3);
  ft_putchar('\n');
  if (ft_strlen(str2) == ft_strlen(p3))
    ft_putstr("La taille de la string est identique\n");
  else
    ft_putstr("La taille de la string n'est pas identique\n");
  free(p3);
  return 0;
}
