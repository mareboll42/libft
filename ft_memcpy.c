/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mareboll <mareboll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 13:18:50 by mareboll          #+#    #+#             */
/*   Updated: 2025/05/21 18:48:38 by mareboll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*this funtion copies maximum n bytes from src to dst*/

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *) dst;
	s = (const unsigned char *)nsrc;
	i = 0;
	if (n == 0)
		return (dst);
	if (!dst && !src)
		return (NULL);
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}

/*int	main(void)
{
	char origen[] = "Hello";
	char destino[10];

	printf("Antes de copiar: destino = %s\n", destino);
    ft_memcpy(destino, origen, 6); 
	printf("Después de copiar: destino = %s\n", destino);

	return (0);
}*/
