/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mareboll <mareboll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 14:33:46 by mareboll          #+#    #+#             */
/*   Updated: 2025/05/21 14:34:07 by mareboll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		(*f)(i, &s[i]);
		i++;
	}
}
/*
void str_upper(unsigned int i, char *c){
	if (*c >= 'a' && *c <= 'z')
        	*c = *c - 32; 
}

int	main(void){
	char str[] = "hola mundo";
	ft_striteri(str, str_upper);
	printf("%s", str);
	return(0);
}
*/