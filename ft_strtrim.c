/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mareboll <mareboll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 14:29:13 by mareboll          #+#    #+#             */
/*   Updated: 2025/05/21 14:29:37 by mareboll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isfromset(char c, const char *set)
{
	while (*set)
	{
		if (*set == c)
		{
			return (1);
		}
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*result;

	if (!s1 || !set)
	{
		return (0);
	}
	start = 0;
	while (s1[start] && ft_isfromset(s1[start], set))
	{
		start ++;
	}
	end = ft_strlen(s1) - 1;
	while (s1[end] && ft_isfromset(s1[end], set) && start < end)
	{
		end --;
	}
	result = ft_substr(s1, start, end - start + 1);
	return (result);
}
/*
int	main(void){
	char str[] = "-*-Hola*-*";
	char set[] = "-*";
	printf ("%s", ft_strtrim(str, set));
}
*/