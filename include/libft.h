#ifndef LIBFT_H
#define LIBFT_H

#include <unistd.h>
#include <stdlib.h>

/*string function*/

void ft_putchar(char);
void ft_putstr(const char*);
void *ft_memset(void*, int, size_t);
void ft_bzero(void *, size_t);
void *ft_memcpy(void*, const void*, size_t);
void *ft_memccpy(void*, void*, int, size_t);
void *ft_memmove(void *, const void *, size_t);
void *ft_memchr(void *, int, size_t);
int ft_memcmp(const void *, const void *, size_t);
size_t ft_strlen(const char *);
char *ft_strdup(const char *);
char *ft_strcpy(char *, const char *);
char *ft_strncpy(char *, const char *, size_t);
char *ft_strcat(char *, const char *);
char *ft_strncat(char *, const char *, size_t);
size_t ft_strlcat(char *, const char *, size_t);
char *ft_strchr(const char *, int);
char *ft_strrchr(char *, int);
char *ft_strstr(const char *, const char *);
char *ft_strnstr(const char *, const char *, size_t);
int ft_strcmp(const char *, const char *);
int ft_strncmp(const char *, const char *, size_t);
int ft_isdigit(int);
int ft_isalpha(int);
int ft_atoi(const char *);
int ft_isalnum(int);
int ft_isascii(int);
int ft_isprint(int);
int ft_toupper(int);
int ft_tolower(int);
void *ft_memalloc(size_t);
void ft_memdel(void **);
char *ft_strnew(size_t);
void ft_strdel(char **);
void ft_strclr(char *);
void ft_striter(char *s, void (*)(char *));
void ft_striteri(char *s, void (*)(unsigned int, char *));
char *ft_strmap(char const *, char (*)(char));
char *ft_strmapi(char const *, char (*)(unsigned int, char));
char *ft_strsub(const char *, unsigned int , size_t);
char *ft_strjoin(char const *, char const *);
char *ft_strtrim(char const *);
char **ft_strsplit(char const *, char);
char *ft_itoa(int);
void ft_putendl(char const *);
void ft_putnbr(int);
void ft_putchar_fd(char, int);
void ft_putendl_fd(char const *, int);
void ft_putnbr_fd(int, int);
void ft_putstr_fd(char const *, int);

/*list description*/

typedef struct s_list
{
	void *content;
	size_t content_size;
	struct s_list *next;
} t_list;

/*list function*/

t_list *ft_lstnew(void const *, size_t);
void ft_lstadd(t_list **, t_list *);
void ft_lstdelone(t_list **, void (*del)(void *, size_t));
void ft_lstdel(t_list **, void (*del)(void *, size_t));


#endif
