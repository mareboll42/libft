/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mareboll <mareboll@student.42malaga.c>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 10:55:42 by mareboll          #+#    #+#             */
/*   Updated: 2025/05/28 08:54:12 by mareboll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t				i;
	unsigned char		*ptr;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = 0;
		i++;
	}
}

/*int main(void)
{
    char ptr[9] = "gameover";
    printf("Antes de ft_bzero: %s\n", ptr);
    ft_bzero(ptr, 4);
    printf("Después de ft_bzero: %s\n", ptr);

    return (0);
}

void    ft_bzero(void *s, size_t n)
{
    ft_memset(s, 0, n);
}

int main(void){
	char str[] = "Hola Mundo";
	printf("%s", ft_bzero(str, 5));

}*/
