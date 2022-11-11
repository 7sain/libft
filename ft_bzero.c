/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hualhash <hualhash@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 16:37:09 by hualhash          #+#    #+#             */
/*   Updated: 2022/11/11 21:24:53 by hualhash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
	return (*s);
}

// int main(void)
// {
// 	int		i;
// 	char	s[15] = "Husain alhashmi";

// 	ft_bzero(s, 10);

// 	i = 0;
// 	while (i < 15)
// 	{
// 		printf("%c", s[i]);
// 		printf("%d", s[i]);
// 		i++;
// 	}
// }
