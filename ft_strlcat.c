/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mareboll <mareboll@student.42malaga.c>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 13:19:32 by mareboll          #+#    #+#             */
/*   Updated: 2025/05/20 13:19:35 by mareboll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	src_len;
	size_t	dst_len;
	size_t	target_size;

	src_len = (size_t)(ft_strlen(src));
	if (!dst && size == 0)
		return (size - src_len);
	dst_len = (size_t)(ft_strlen(dst));
	target_size = size - dst_len - 1;
	i = 0;
	if (size <= dst_len)
		return (size + src_len);
	while (src[i] != '\0' && i < target_size)
	{
		dst[dst_len + i] = src[i];
		i ++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}
/*
#include <stdio.h>
int main(void)
{
	char dst[10] = "Hola";
	char *src = "42";
	printf("%zu", ft_strlcat(dst, src, 10));
}
*/