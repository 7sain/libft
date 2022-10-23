/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hualhash <hualhash@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 18:30:27 by hualhash          #+#    #+#             */
/*   Updated: 2022/10/12 22:23:27 by hualhash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
	{
		return (0);
	}
}

// #include <stdio.h>
// #include <ctype.h>
// int main()
// {
//     char c;

//     printf("Enter a character u stupid: ");
//     scanf("%c", &c);

//     if (ft_isalpha(c) == 0)
//          printf("%c is not an alphabet u stuppid.", c);
//     else
//          printf("%c is an alphabet u stupid.", c);

//     return 0;
// }
