#ifndef LIBFT_H
#define LIBFT_H

#include <stddef.h>

void ft_bzero(void *s, size_t n);
int ft_isalnum(int c);
int ft_isalpha(int c);
int ft_isascii(int c);
int ft_isdigit(int c);
int ft_isprint(int c);
void *ft_memcpy(void *restrict dst, const void *restrict src, size_t n);
void *ft_memmove(void *dst, const void *src, size_t len);
void *ft_memset(void *b, int c, size_t len);
char *ft_strchr(const char *s, int c);
size_t ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize);
size_t strlcpy(char * restrict dst, const char * restrict src, size_t dstsize);
size_t ft_strlen(const char *s);
char *ft_strrchr(const char *s, int c);
int ft_tolower(int c);
int ft_toupper(int c);

#endif