/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hualhash <hualhash@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 18:51:01 by hualhash          #+#    #+#             */
/*   Updated: 2022/10/24 16:55:21 by hualhash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'))
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
//     printf("Enter a character: ");
//     scanf("%c", &c);

//     if (isalnum(c) == 0)
//         printf("%c is not an alphanumeric character.", c);
//     else
//         printf("%c is an alphanumeric character.", c);
//     return 0;
// }