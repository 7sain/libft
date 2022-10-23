/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hualhash <hualhash@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 16:38:39 by hualhash          #+#    #+#             */
/*   Updated: 2022/10/15 16:34:03 by hualhash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != 0)
	i++;
	return (i);
}

// int main()
// {
//     char a[20]="Husain";
//     char b[20]={'P','r','o','g','r','a','m','\0'};

//     // using the %zu format specifier to print size_t
//     printf("Length of string a = %zu \n",ft_strlen(a));
//     printf("Length of string b = %zu \n",ft_strlen(b));

//     return 0;
// }
