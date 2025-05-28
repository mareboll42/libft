/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sstrlcat.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mareboll <mareboll@student.42malaga.c>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 13:19:32 by mareboll          #+#    #+#             */
/*   Updated: 2025/05/26 12:58:11 by mareboll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dst[i] && i < dstsize)
		i++;
	while (src[j] && (i + j + 1) < dstsize)
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i < dstsize)
		dst[i + j] = '\0';
	while (src[j])
		j++;
	return (i + j);
}

/*int	main(void)
{
	char buffer[12] = "Hola";
	const char *agregar = " mundo";

	size_t resultado = ft_strlcat(buffer, agregar, sizeof(buffer));

	printf("Resultado final: \"%s\"\n", buffer);
	printf("Longitud total que intentó crear: %zu\n", resultado);

	return (0);
}*/