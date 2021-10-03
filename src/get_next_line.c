#include "../include/get_next_line.h"

int get_next_line(const int fd, char **line)
{
    int c;
    int i;
    int j;
    int byte_read;
    char *tmp1;
    char *tmp2;

    i = j = 0;
    c = 1;
    tmp1 = ft_strnew(BUFF_SIZE);
    if (!tmp1)
        return -1;
    while (c != '\n' && c != EOF) {
        byte_read = read(fd, &c, 1);
        if (!byte_read)
            return 0;
        tmp1[i + j] = c;
        i++;
        if (i == BUFF_SIZE)
        {
            tmp1[i + j] = '\0';
            tmp2 = tmp1;
            tmp1 = ft_strnew(ft_strlen(tmp2) + BUFF_SIZE);
            if (!tmp1)
                return -1;
            ft_strcpy(tmp1, tmp2);
            free(tmp2);
            j += i;
            i = 0;
        }
    }
    tmp1[i + j - 1] = '\0';
    *line = ft_strdup(tmp1);
    if (!*line)
        return -1;
    free(tmp1);
    return 1;
}


/*
    1 - cree une string 
    2 - lire dans le file descriptor
    3 - recupere la ligne 
    4 - afficher la ligne avec un saut a la ligne
*/