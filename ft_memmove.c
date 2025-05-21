/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mareboll <mareboll@student.42malaga.c>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 13:19:14 by mareboll          #+#    #+#             */
/*   Updated: 2025/05/20 13:19:17 by mareboll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* this funtion copies maximum n bytes from src to dst, but first 
check if the 2 memory blocks are overlapping or not. If they are 
overlapping we'll copy from the end of the source memory block until
the start. If they are not overlapping we'll copy "normally", 
from start to end. */

#include <stdio.h>
#include "libft.h"
#include <stddef.h>

void    *ft_memmove(void *dst, const void *src, size_t len)
{
    unsigned char *d;
    unsigned char *s;
    size_t i;
    
    d = (unsigned char*)dst;
    s = (unsigned char*)src;
    if (!dst && !src) //
        return (NULL);
    
    if (d < s) //copiamos hacia delante
    {
        i = 0;
        while (i < len)
        {
            d[i] = s[i];
            i++;
        }
    }
    else //copiamos hacia atrás
    {
        i = len;
        while (i > 0)
        {
            d[i - 1] = s[i - 1];
            i--;
        }
    }
    return (dst);
}
