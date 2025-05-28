/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mareboll <mareboll@student.42malaga.c>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 13:19:43 by mareboll          #+#    #+#             */
/*   Updated: 2025/05/28 09:38:11 by mareboll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	letter;

	letter = (unsigned char)c;
	while (*s != '\0')
	{
		if (*s == letter)
		{
			return ((char *)s);
		}
		s++;
	}
	if ((unsigned char)c == '\0')
	{
		return ((char *)s);
	}
	return (0);
}
/*
int	main(void)
{
	const char *frase = "hola Mundo";
	char letra = 'M';
	char *resultado;
	resultado = ft_strchr(frase, letra);
	
	printf("Resultado: %s", resultado);
}
*/
