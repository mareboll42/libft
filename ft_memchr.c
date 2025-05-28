/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mareboll <mareboll@student.42malaga.c>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 13:18:08 by mareboll          #+#    #+#             */
/*   Updated: 2025/05/26 13:02:01 by mareboll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	x;
	size_t			i;

	x = (unsigned char) c;
	ptr = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == x)
			return ((void *) &ptr[i]);
		i++;
	}
	return (NULL);
}

/*int main(void)
{
	char str[] = "welcometo42";
	printf("Resultado: %s\n", (char *)ft_memchr(str, '4', 9));
	return (0);
}*/
