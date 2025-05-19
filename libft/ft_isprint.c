/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mareboll <mareboll@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 20:30:54 by mareboll          #+#    #+#             */
/*   Updated: 2025/05/07 20:40:30 by mareboll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* if c is a printing character in the ASCII table;
 return non-zero value of your choise;
 return 0 */

/*#include <stdio.h>
#include "libft.h"*/

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (c);
	return (0);
}

/*int	main()
{
	int	c;
	c = '*';
	printf("%i", ft_isprint (c));
}*/
