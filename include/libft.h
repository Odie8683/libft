#ifndef LIBFT_H
#define LIBFT_H

#include <unistd.h>
#include <stdlib.h>

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

#endif
