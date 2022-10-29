/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hualhash <hualhash@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 16:38:47 by hualhash          #+#    #+#             */
/*   Updated: 2022/10/25 15:47:45 by hualhash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// locates the first occurrence of c(ftom the right).

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	int		i;

	str = (char *)s;
	i = ft_strlen(s);
	while (i >= 0)
	{
		if (str[i] == (char)c)
		{
			return (&str[i]);
		}
		i--;
	}
	return (0);
}

// int main () {
//    const char str[] = "Husain Faisal Alhashmi";
//    const char ch = 's';
//    char *ret;

//    ret = ft_strrchr(str, ch);

//    printf("String after |%c| is - |%s|\n", ch, ret);
//    return(0);
// }
