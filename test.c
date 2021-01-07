#include "include/libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

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
  ft_memmove(buffer, str2, 8);
  ft_putstr(buffer);
  ft_putchar('\n');
  p2 = (char *)ft_memchr(p, 'r', 6);
  if (p2 == NULL) {
    ft_putstr("No 'r' in this string\n");
    return 0;
  }
  ft_putstr(p2);
  ft_putchar('\n');
  int test = ft_strncmp("Jordan", "JzrdanPP", 6);
  if (test == 0){
    ft_putstr("C'est identique\n");
    printf("%d\n", test);
  }
  else
    ft_putstr("Ce n'est pas identique\n");

  printf("%d\n", test);
  printf("%ld\n",ft_strlen("jordan"));
  p3 = ft_strdup(str2);
  ft_putstr(p3);
  ft_putchar('\n');
  if (ft_strlen(str2) == ft_strlen(p3))
    ft_putstr("La taille de la string est identique\n");
  else
    ft_putstr("La taille de la string n'est pas identique\n");
  free(p3);
  int cat =  ft_strlcat(buffer, "Wide Web", 10);
  ft_putstr(buffer);
  printf("\n%d \n", cat);
  p3 = ft_strnstr("Je suis le rois des renois", "dessa", 3);
  if (p3 != NULL) {
  	ft_putstr("Le la caratère a était trouver!\nVoici la suite suite du char chercher : ");
	ft_putstr(p3);
	putchar('\n');
  }
  else
  	ft_putstr("il n'y a pas le char demander dans la string\n");
  printf("atoi = %d\n", ft_atoi("1002"));
  printf("isalnum = %d\n", ft_isalnum('v'));
  printf("isascii = %d\n", ft_isascii(128));
  printf("isprint = %d\n", ft_isprint('A'));
  ft_putchar(ft_toupper('a'));
  ft_putchar('\n');
  ft_putchar(ft_tolower('Z'));
  ft_putchar('\n');

  return 0;
}
