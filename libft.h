#ifndef lIBFT_H
#define LIBFT_H
#include <unistd.h>
#include <stdio.h>
#include <stddef.h> //necesario para size_t

size_t ft_strlen(const char *s);
void    *ft_memset(void *b, int c, size_t len);
void    ft_bzero(void *s, size_t n);
void    *ft_memcpy(void *dst, const void *scr, size_t n);
void    *ft_memmove(void *dst, const void *src, size_t len);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);


#endif