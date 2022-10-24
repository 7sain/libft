/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hualhash <hualhash@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 16:37:09 by hualhash          #+#    #+#             */
/*   Updated: 2022/10/24 16:55:11 by hualhash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
	return (*s);
}

// int main()
// {
//     char s[11] = "Hello World";
//     ft_bzero(s, 11);

//     for (int i = 0; i < 11; i++) printf("%d ", s[i]);
// print elements of the buffer
//     puts(s);
//     return 0;
// }