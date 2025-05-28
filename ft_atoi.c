/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mareboll <mareboll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 14:10:19 by mareboll          #+#    #+#             */
/*   Updated: 2025/05/21 14:11:08 by mareboll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	num;
	int	pos;
	int	sig;

	pos = 0;
	num = 0;
	sig = 1;
	while (nptr[pos] != '\0' && (nptr[pos] == ' '
			|| (nptr[pos] >= 9 && nptr[pos] <= 13)))
		pos ++;
	if (nptr[pos] != '\0' && nptr[pos] == '-')
	{
		sig = sig * -1;
		pos ++;
	}
	else if (nptr[pos] == '+')
		pos ++;
	while (nptr[pos] != '\0' && (nptr[pos] >= '0' && nptr[pos] <= '9'))
	{
		num = (num * 10) + (nptr[pos] - '0');
		pos ++;
	}
	return (num * sig);
}
/*
int	main(void){
	printf("%d", ft_atoi("-43"));
	printf("\n");
	printf("%d", ft_atoi("120"));
	printf("\n");
	printf("%d", ft_atoi("5"));
}
*/
