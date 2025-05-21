/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mareboll <mareboll@student.42malaga.c>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 13:20:14 by mareboll          #+#    #+#             */
/*   Updated: 2025/05/20 13:20:18 by mareboll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (s1[i] || s2[i]))
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}

int	main(void)
{
	const char *a = "Piscina42";
	const char *b = "Piscina99";

	printf("Resultado 1: %d\n", ft_strncmp(a, b, 7));  // iguales hasta "Piscina"
	printf("Resultado 2: %d\n", ft_strncmp(a, b, 8));  // difieren en el carácter 8 ('4' vs '9')
	printf("Resultado 3: %d\n", ft_strncmp("Hola", "Holanda", 10)); // 'a' vs 'n'

	return (0);
}