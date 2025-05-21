/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mareboll <mareboll@student.42malaga.c>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 13:18:50 by mareboll          #+#    #+#             */
/*   Updated: 2025/05/20 13:18:54 by mareboll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*this funtion copies maximum n bytes from src to dst*/

#include <stdio.h>
#include "libft.h"

void    *ft_memcpy(void *dst, const void *src, size_t n)
{
    size_t i;
    unsigned char *d;
    const unsigned char *s; 
    
    d = (unsigned char*) dst;
    s = (const unsigned char*)src;
    i = 0;
    
    while (i < n)
    {
        d[i] = s[i];
        i++;
    }
    return (dst);
}

int	main(void)
{
	char origen[] = "Hello";
	char destino[10];

	printf("Antes de copiar: destino = %s\n", destino);
    ft_memcpy(destino, origen, 6); 
	printf("Después de copiar: destino = %s\n", destino);

	return (0);
}