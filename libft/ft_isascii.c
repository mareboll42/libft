/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mareboll <mareboll@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 18:56:31 by mareboll          #+#    #+#             */
/*   Updated: 2025/05/13 12:25:12 by mareboll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include "libft"
#include <stdio.h>*/

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

/*int	main(void)
{
	int	c;

	c = 'A';
	printf("Para el valor %i devuelve: ", c);
	printf("%i\n", ft_isascii (c));
	c = 140;
	printf("Para el valor %i devuelve: ", c);
	printf("%i\n", ft_isascii (c));
	c = ' ';
	printf("Para el valor %i devuelve: ", c);
	printf("%i\n", ft_isascii (c));
}*/
