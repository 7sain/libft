/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hualhash <hualhash@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 21:10:13 by hualhash          #+#    #+#             */
/*   Updated: 2022/10/04 22:37:07 by hualhash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isprint(int c)
{
    if ( c >= 32 && c <= 126)
    return (1);
    else
    {
        return (0);
    }
    
}


// #include <ctype.h>
// #include <stdio.h>
// int main()
// {
//    int c;
//    for(c = 1; c <= 127; ++c)
//    	if (ft_isprint(c)!= 0)
//              printf("%c ", c);
//    return 0;
// }