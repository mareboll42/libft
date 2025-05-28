/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mareboll <mareboll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 14:24:19 by mareboll          #+#    #+#             */
/*   Updated: 2025/05/21 14:25:02 by mareboll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	i;
	char	*ptr_s;

	i = 0;
	ptr_s = malloc(ft_strlen(s) + 1);
	if (!ptr_s)
	{
		return (0);
	}
	while (s[i])
	{
		ptr_s[i] = s[i];
		i ++;
	}
	ptr_s[i] = '\0';
	return (ptr_s);
}
/*
int	main(void){
	char w1[] = "Hola";
	char *w2;
	w2 = ft_strdup(w1);
	if(w2){
		printf("%s", w2);
		free(w2);
	}else{
		printf("Error al duplicar la cadena");
	}
}
*/