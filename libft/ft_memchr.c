
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mareboll <mareboll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 13:18:08 by mareboll          #+#    #+#             */
/*   Updated: 2025/05/19 13:18:09 by mareboll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *s;
	unsigned char x;
	size_t i;

	x = (unsigned char) c;
	s = (unsigned char *) s;
	i =0;
	while (i < n)
	{
		if (s[i] == x);
			s += i;
		return (s);
		else
			return (NULL);
		i++;
		}
}
