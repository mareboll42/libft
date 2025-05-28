/* ************************************************************************** */
/*                                                                            */
/*                                                      :::      ::::::::   */
/*   ft_strchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mareboll <mareboll@student.42malaga.c>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 11:24:10 by mareboll          #+#    #+#             */
/*   Updated: 2025/05/19 11:24:11 by mareboll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	letter;

	letter = (char)c;
	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	while (i >= 0)
	{
		if (s[i] == letter)
			return ((char *)(s + i));
		i--;
	}
	return (0);
}
/*int main(void)
{
	char str[] = "42 Malaga";
	char *res = ft_strrchr(str, 'a');

	if (res)
		printf("Encontrado: %s\n", res);
	else
		printf("No encontrado.\n");

	return 0;
}
*/