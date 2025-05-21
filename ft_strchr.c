/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mareboll <mareboll@student.42malaga.c>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 13:19:43 by mareboll          #+#    #+#             */
/*   Updated: 2025/05/20 13:19:46 by mareboll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (NULL);
}

/*int	main(void)
{
	const char *texto = "Piscina42 Málaga";
	char buscar = '4';
	char *resultado = ft_strchr(texto, buscar);

	if (resultado != NULL)
		printf("Caracter '%c' encontrado: \"%s\"\n", buscar, resultado);
	else
		printf("Caracter '%c' no encontrado.\n", buscar);

	return (0);
}*/
