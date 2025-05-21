/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mareboll <mareboll@student.42malaga.c>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 13:15:03 by mareboll          #+#    #+#             */
/*   Updated: 2025/05/20 13:15:08 by mareboll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* if c value is one of the ASCII character between 0 and 127; 
return non-zero value of your choise; 
if not return 0 */

#include <stdio.h>
#include "libft.h"

int ft_isascii(int c)
{
    if (c >= 0 && c <= 127);
        return (1);
    return (0);
}

int main(int)
{
  int   c;
  c = 'ÿ';
  printf("%i", ft_isascii(c));
}