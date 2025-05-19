/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mareboll <mareboll@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 17:41:40 by mareboll          #+#    #+#             */
/*   Updated: 2025/05/02 17:49:44 by mareboll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* if c is one of the decimal digit character in the ASCII table;
return non-zero value of your choise;
return 0 */

/*#include "libft.h"
#include <stdio.h>*/

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (c);
	return (0);
}

/*int	main()
{
	int	c;
	c = '0';
	printf("%i", ft_isdigit (c));
}*/
