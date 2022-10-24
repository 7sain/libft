/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hualhash <hualhash@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 16:37:20 by hualhash          #+#    #+#             */
/*   Updated: 2022/10/24 17:48:47 by hualhash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	cha;

	str = (unsigned char *)s;
	cha = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (*str == cha)
		{
			return (str);
		}
		str++;
		i++;
	}
	return (NULL);
}

// int main () {
//    const char str[] = "http://www.tutorialspoint.com";
//    const char ch = 'w';
//    char *ret;

//    ret = ft_memchr(str, ch, strlen(str));

//    printf("String after |%c| is - |%s|\n", ch, ret);

//    return(0);
// }