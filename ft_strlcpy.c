/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mareboll <mareboll@student.42malaga.c>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 11:23:23 by mareboll          #+#    #+#             */
/*   Updated: 2025/05/19 11:23:30 by mareboll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	if (!dst || !src)
		return (0);
	i = 0;
	if (size > 0)
	{
		while (src[i] && i < size - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	i = 0;
	while (src[i])
		i++;
	return (i);
}

int	main(void)
{
	char origen[] = "Hola mundo";
	char destino[6]; // solo caben 5 letras + '\0'

	size_t resultado = ft_strlcpy(destino, origen, sizeof(destino));

	printf("Contenido copiado en destino: \"%s\"\n", destino);
	printf("Longitud total del src: %zu\n", resultado);

	return (0);
}
