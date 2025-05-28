/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mareboll <mareboll@student.42malaga.c>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 13:20:14 by mareboll          #+#    #+#             */
/*   Updated: 2025/05/28 09:48:02 by mareboll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((s1[i] && s2[i]) && (s1[i] == s2[i]) && (i < n - 1))
	{
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/*int	main(void)
{
	const char *a = "Piscina42";
	const char *b = "Piscina99";

	printf("Resultado 1: %d\n", ft_strncmp(a, b, 7));
	printf("Resultado 2: %d\n", ft_strncmp(a, b, 8)); 
	printf("Resultado 3: %d\n", ft_strncmp("Hola", "Holanda", 10)); // 'a' vs 'n'

	return (0);
}*/
