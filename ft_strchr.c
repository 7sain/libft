/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hualhash <hualhash@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 16:37:35 by hualhash          #+#    #+#             */
/*   Updated: 2022/10/24 16:56:09 by hualhash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;

	str = (char *)s;
	while (*str != (char)c)
	{
		if (*str == '\0')
		{
			return (NULL);
		}
	str++;
	}
	return (str);
}

// int main () {
// //    const char str[] = "abcdefghijklmnopqrstuvwxyz{}";
// //    const char ch = 'a' + 256;
// //    char *ret;

// //    ret = ft_strchr(str, ch);
//  printf("String before is |%s|\n", (strchr("tripouille", 't' + 256)));
//    printf("String after  is |%s|\n", (ft_strchr("tripouille", 't' + 256)));
//    return(0);
// }