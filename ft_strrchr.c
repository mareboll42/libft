/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mareboll <mareboll@student.42malaga.c>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 11:24:10 by mareboll          #+#    #+#             */
/*   Updated: 2025/05/19 11:24:11 by mareboll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	const char *ultima = NULL;

	while (*s)
	{
		if (*s == (char)c)
			ultima = s;
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return ((char *)ultima);
}

int	main(void)
{
	const char *texto = "Hola Málaga 42";
	char buscar = 'a';
	char *resultado = ft_strrchr(texto, buscar);

	if (resultado != NULL)
		printf("Última aparición de '%c': \"%s\"\n", buscar, resultado);
	else
		printf("Carácter '%c' no encontrado.\n", buscar);

	return (0);
}