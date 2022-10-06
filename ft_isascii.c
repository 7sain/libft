/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hualhash <hualhash@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 18:58:47 by hualhash          #+#    #+#             */
/*   Updated: 2022/10/04 22:36:58 by hualhash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isascii (int c)
{
    if (c >= 0 && c <= 127)
    return (1);
    else
    {
        return (0);
    }
    
}
// #include <stdio.h>
// #include <ctype.h>
 
// int main(void)
// {
//    int ch;
 
//    for (ch = 0x7c; ch <= 0x82; ch++) {
//       printf("%#04x    ", ch);
//       if (isascii(ch))
//          printf("The character is %c\n", ch);
//       else
//          printf("Cannot be represented by an ASCII character\n");
//    }
//    return 0;
// }