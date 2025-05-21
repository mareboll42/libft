/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mareboll <mareboll@student.42malaga.c>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 13:19:24 by mareboll          #+#    #+#             */
/*   Updated: 2025/05/20 13:19:27 by mareboll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*this function writes len bytes of value c to the string b,
we have to convert b to a pointer to unsigned char,
c will be to convert to an unsigned char,
return the first parameter of the funtion (void *b string)*/

#include <stdio.h>
#include "libft.h"

void    *ft_memset(void *b, int c, size_t len)
{
    unsigned char *ptr;
    size_t i;

    ptr = (unsigned char *)b;
    i = 0;
    while (i < len)
    {
        ptr[i] = (unsigned char) c;
        i++;
    }
    return (b);
}

int main(void)
{
    char buffer[9] = "gameover";
    
    ft_memset(buffer, 'x', 4);
    printf("Resultado: %s\n", buffer);
    return (0);
}