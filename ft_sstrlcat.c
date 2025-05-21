/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sstrlcat.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mareboll <mareboll@student.42malaga.c>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 13:19:32 by mareboll          #+#    #+#             */
/*   Updated: 2025/05/20 13:19:35 by mareboll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i = 0;
	size_t	j = 0;

	// Calculamos longitud de dst
	while (dst[i] && i < dstsize)
		i++;

	// Si dstsize es menor que la longitud de dst, no podemos copiar
	while (src[j] && (i + j + 1) < dstsize)
	{
		dst[i + j] = src[j];
		j++;
	}

	// Terminamos con \0 si hay espacio
	if (i < dstsize)
		dst[i + j] = '\0';

	// Devuelve lo que hubiese ocupado la cadena si tuviera espacio
	while (src[j])
		j++;

	return (i + j);
}

int	main(void)
{
	char buffer[12] = "Hola";
	const char *agregar = " mundo";

	size_t resultado = ft_strlcat(buffer, agregar, sizeof(buffer));

	printf("Resultado final: \"%s\"\n", buffer);
	printf("Longitud total que intentó crear: %zu\n", resultado);

	return (0);
}