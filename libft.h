#ifndef LIBFT_H
# define LIBFT_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
 
// Part 1
int     ft_isalpha(int c);
int     ft_isdigit(int c);
int     ft_isalnum(int c);
int     ft_isascii(int c);
int     ft_isprint(int c);
size_t  ft_strlen(const char *str);
int     ft_toupper(int c);
int     ft_tolower(int c);
char    *ft_strchr(const char *str, int c);
char    *ft_strrchr(const char *str, int c);
int     ft_strncmp(const char *str1, const char *str2, size_t n);
void    *ft_memset(void *str, int c, size_t n);
void    ft_bzero(void *str, size_t n);
void    *ft_memcpy(void *dest, const void *src, size_t n);
void    *ft_memmove(void *dest, const void *src, size_t n);
void    *ft_memchr(const void *str, int c, size_t n);
int     ft_memcmp(const void *str1, const void *str2, size_t n);
size_t  ft_strlcpy(char *dst, const char *src, size_t size);
size_t  ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize);
char    *ft_strnstr(const char	*big, const char *little, size_t len);
int     ft_atoi(const char *str);
void    *ft_calloc(size_t nitems, size_t size);
char    *ft_strdup(const char *str);

// Part 2
char    *ft_substr(char const *str, unsigned int start, size_t len);
char    *ft_strtrim(char const *s1, char const *set);
char    **ft_split(char const *s, char c);
char    *ft_itoa(int n);
char    *ft_strmapi(char const *s, char (*f)(unsigned int, char));
void    ft_striteri(char *s, void (*f)(unsigned int, char*));
void    ft_putchar_fd(char c, int fd);
void    ft_putstr_fd(char *s, int fd);
void    ft_putendl_fd(char *s, int fd);
void    ft_putnbr_fd(int n, int fd);

#endif