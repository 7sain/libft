/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hualhash <hualhash@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 16:37:09 by hualhash          #+#    #+#             */
/*   Updated: 2022/09/26 18:04:48 by hualhash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*str;

	str = (char *)s;
	i = 0;
	while (i < n)
	{
		str[i] = 0;
		i++;
	}
}

int main(int argc, char const *argv[])
{
    char s[11] = "Hello World";
    ft_bzero(s, 1);

    for (int i = 0; i < 11; i++) printf("%d ", s[i]); // print elements of the buffer
    puts(s);
    return 0;
}