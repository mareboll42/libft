/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mareboll <mareboll@student.42malaga.c>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 11:23:49 by mareboll          #+#    #+#             */
/*   Updated: 2025/05/19 11:23:50 by mareboll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int    ft_tolower(int c)
{
    /* this checks if the character is an upper-case letter
     * with the decimal ASCII values (65 => A; 90 => Z)
     */
    if (c >= 65 && c <= 90)
        /* In the ASCII table, upper-case letters are indexed 32
         * less than lower-case letters, so to get the
         * corresponding lower-case letter, we add 32 to the
         * upper-case letter
         */
        return (c + 32);
    /* As said in the man, if the character is not an upper-case
     * letter, the argument is returned unchanged, that's why we 
     * return c directly
     */
    return (c);
}