#include "include/libft.h"
#include <stdio.h>

int main(void)
{
    char *test;
    if (get_next_line(0, &test)) {
            ft_putstr(test);
            ft_putchar('\n');
    } else {
        ft_putstr("Rien a affichier fin du fichier");
        return 1;
    }
    if (get_next_line(0, &test)) {
            ft_putstr(test);
            ft_putchar('\n');
    } else {
        ft_putstr("Rien a affichier fin du fichier\n");
        return 1;
    }


    return 0;
}