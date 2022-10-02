/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hualhash <hualhash@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 16:38:47 by hualhash          #+#    #+#             */
/*   Updated: 2022/10/02 19:51:24 by hualhash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	int	i;

	str = (char *)s;
	i = strlen(s);
	while (i >= 0)
	{
		if (str[i] == c)
		{
			return (&str[i]);
		}
		i--;
	}
	return (0);
}

int main () {
   const char str[] = "http://www.tutorialspoint.com";
   const char ch = 'c';
   char *ret;

   ret = ft_strrchr(str, ch);

   printf("String after |%c| is - |%s|\n", ch, ret);
   
   return(0);
}