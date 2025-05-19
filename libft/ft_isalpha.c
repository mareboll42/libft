/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mareboll <mareboll@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 18:56:31 by mareboll          #+#    #+#             */
/*   Updated: 2025/04/24 19:12:23 by mareboll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* if c value is one of the lowercase/uppercase letter in the ASCII table; 
return non-zero value of your choise; 
return 0 */

/*#include "libft.h"
#include <stdio.h>*/

int	ft_isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (c);
	return (0);
}

/*int	main()
{
	int	c;
	c = '2';
	printf("%i", ft_isalpha (c));	
}*/
