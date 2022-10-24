/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hualhash <hualhash@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 16:37:32 by hualhash          #+#    #+#             */
/*   Updated: 2022/10/24 18:01:12 by hualhash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*p_b;

	i = 0;
	p_b = (unsigned char *)b;
	while (i < len)
	{
		p_b[i++] = c;
	}
	return (b);
}

// // C program to demonstrate working of memset()
// #include <stdio.h>
// #include <string.h>

// int main()
// {
// 	char str[50] = "GeeksForGeeks is for programming geeks.";
// 	printf("\nBefore memset(): %s\n", str);

// 	// Fill 8 characters starting from str[13] with '.'
// 	ft_memset(str + 5, '$', 3*sizeof(char));

// 	printf("After memset(): %s", str);
// 	return 0;
// }
