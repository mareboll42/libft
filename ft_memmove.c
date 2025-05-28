/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mareboll <mareboll@student.42malaga.c>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 13:19:14 by mareboll          #+#    #+#             */
/*   Updated: 2025/05/27 19:23:23 by mareboll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*d;
	char	*s;

	if (!dest && !src && n > 0)
	{
		return (0);
	}
	d = (char *) dest;
	s = (char *) src;
	if (dest > src)
	{
		while (n > 0)
		{
			d[n - 1] = s[n - 1];
			n--;
		}
	}
	else
	{
		ft_memcpy (dest, src, n);
	}
	return (dest);
}
/*
int	main(void){
	char p[] = "chocolate";
	size_t n = 7;
	ft_memmove(p + 3, p, n);
	printf("%s", p);
}
*/
