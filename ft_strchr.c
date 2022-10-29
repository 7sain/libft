/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hualhash <hualhash@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 16:37:35 by hualhash          #+#    #+#             */
/*   Updated: 2022/10/25 14:03:11 by hualhash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// locates the first occurrence of c.

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;
	char	p_c;

	str = (char *)s;
	p_c = (char)c;
	while (*str != p_c)
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
//    const char str[] = "abcdefghijklmnopqrstuvwxyz{}";
//    const char ch = 'a';
//    char *ret;

//    ret = ft_strchr(str, ch);
//  printf("String before is |%s|\n", (strchr("a-b-c-d-e-f-g-h-i-j-k-l-
//m-n-o-p-q-r-s-t-u-v-w-x-y-z.
//A-B-C-D-E-F-G-H-I-J-K-L-M-N-O-P-Q-R-S-T-U-V-W-X-Y-Z", 's')));
//    printf("String after  is |%s|\n", (ft_strchr("a-b-c-d-e-f-g-h-i-j-k-l-
//m-n-o-p-q-r-s-t-u-v-w-x-y-z.
// A-B-C-D-E-F-G-H-I-J-K-L-M-N-O-P-Q-R-S-T-U-V-W-X-Y-Z", 's')));
//    return(0);
// }