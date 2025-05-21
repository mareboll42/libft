/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mareboll <mareboll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 14:36:39 by mareboll          #+#    #+#             */
/*   Updated: 2025/05/21 14:37:08 by mareboll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	while (*s != '\0')
	{
		write (fd, s, 1);
		s++;
	}
	write(fd, "\n", 1);
	return ;
}
/*
int	main(void){
	char str[] = "holaaa";
	ft_putendl_fd(str, 1);
	return(0);
}
*/