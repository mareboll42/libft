/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mareboll <mareboll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 14:31:34 by mareboll          #+#    #+#             */
/*   Updated: 2025/05/21 14:31:54 by mareboll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_len(int n)
{
	int	i;

	i = 0;
	if (n < 1)
	{
		i = 1;
	}
	while (n)
	{
		n = n / 10;
		i ++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = ft_len(n);
	str = malloc(len + 1);
	if (!str)
		return (0);
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	if (n == 0)
		*str = '0';
	str[len] = '\0';
	while (n > 0)
	{
		str[--len] = (n % 10) + '0';
		n = n / 10;
	}
	return (str);
}
/*
int	main(void){
	printf("%s", ft_itoa(-43));
	printf("\n");
	printf("%s", ft_itoa(120));
	printf("\n");
	printf("%s", ft_itoa(5));
}
*/