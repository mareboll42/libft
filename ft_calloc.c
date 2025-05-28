/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mareboll <mareboll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 14:23:08 by mareboll          #+#    #+#             */
/*   Updated: 2025/05/21 14:23:39 by mareboll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr_nmemb;

	ptr_nmemb = malloc(nmemb * size);
	if (!ptr_nmemb)
	{
		return (0);
	}
	ft_bzero(ptr_nmemb, nmemb * size);
	return (ptr_nmemb);
}
/*
int main(void)
{
	char *str;
	int i;

	str = ft_calloc(1, 5);
	if (!str)
		return (1);

	for (i = 0; i < 4; i++)
		str[i] = 'a';

	printf("%s\n", str);

	free(str)
	return (0);
}
*/