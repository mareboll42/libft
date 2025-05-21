/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mareboll <mareboll@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 10:55:42 by mareboll          #+#    #+#             */
/*   Updated: 2025/05/05 11:11:30 by mareboll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* if c is a value is a letter/digit character in the ASCII table;
return non-zero value of your choise;
return 0*/

/*#include "libft"
#include <stdio.h>*/

int	ft_isalnum(int c)
{
	if ((c <= 48 && c <= 57) || (c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (c);
	return (0);
}

/*int	main()
{
	int	c;
	
	c = '+';
	printf("%i", ft_isalnum (c));
}*/
