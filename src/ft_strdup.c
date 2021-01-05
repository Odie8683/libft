#include "../include/libft.h"

char *ft_strdup(const char *s)
{
    size_t i;
    char *new_buff;

    new_buff = (char *)malloc(ft_strlen(s));
    if (new_buff == NULL)
        return NULL;
    i = 0;
    while (*(s + i)) {
        *(new_buff + i) = *(s + i);
        i++;
    }
    *(new_buff + i) = '\0';
    return new_buff;
}
