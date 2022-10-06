/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hualhash <hualhash@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 16:37:32 by hualhash          #+#    #+#             */
/*   Updated: 2022/10/04 22:37:32 by hualhash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

i = 0;
	while (i < len)
	{
((unsigned char *)b)[i++] = c;
	}
	return (b);
}

// C program to demonstrate working of memset()
// #include <stdio.h>
// #include <string.h>

// int main()
// {
// 	char str[50] = "GeeksForGeeks is for programming geeks.";
// 	printf("\nBefore memset(): %s\n", str);

// 	// Fill 8 characters starting from str[13] with '.'
// 	ft_memset(str + 7, '.', 8*sizeof(char));

// 	printf("After memset(): %s", str);
// 	return 0;
// }
