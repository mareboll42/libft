/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mareboll <mareboll@student.42malaga.c>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 11:24:00 by mareboll          #+#    #+#             */
/*   Updated: 2025/05/19 11:24:01 by mareboll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

/*int	main(void)
{
	char letra1 = 'a';
	char letra2 = 'Z';
	char simbolo = '3';

	printf("'%c' → '%c'\n", letra1, ft_toupper(letra1));   // 'a' → 'A'
	printf("'%c' → '%c'\n", letra2, ft_toupper(letra2));   // 'Z' → 'Z'
	printf("'%c' → '%c'\n", simbolo, ft_toupper(simbolo)); // '3' → '3'

	return (0);
}*/
