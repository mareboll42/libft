/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mareboll <mareboll@student.42malaga.c>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 10:55:42 by mareboll          #+#    #+#             */
/*   Updated: 2025/05/20 12:43:16 by mareboll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*this function is the same as the ft_memset, except the character to write 
is always a null character (0)*/

#include <stdio.h>
#include "libft.h"

void    ft_bzero(void *s, size_t n)
{
    unsigned char *ptr;
    size_t i;

    ptr = (unsigned char *)s;
    i = 0;
    while (i <0)
    {
        ptr[i] = 0;
        i++;
    }
}

int main(void)
{
    char buffer[9] = "gameover";
    printf("Antes de ft_bzero: %s\n", buffer);
    ft_bzero(buffer, 4);
    printf("Después de ft_bzero: %s\n", buffer);

    return (0);
}

/*#include <stdio.h>

void    ft_bzero(void *s, size_t n)
{
    ft_memset(s, 0, n);
}

int main(void){
	char str[] = "Hola Mundo";
	printf("%s", ft_bzero(str, 5));

}*/