/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hualhash <hualhash@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 14:49:29 by hualhash          #+#    #+#             */
/*   Updated: 2022/10/04 22:38:12 by hualhash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	front;
	size_t	back;
	char	*str;

	str = 0;
	if (s1 != 0 && set != 0)
	{
		front = 0;
		back = strlen(s1);
		while (s1[front] && strchr(set, s1[front]))
		front++;
		while (s1[back - 1] && strchr(set, s1[back - 1]) && back > front)
		back--;
		str = (char*)malloc(sizeof(char) * (back - front + 1));
		if (str)
			strlcpy(str, &s1[front], back - front + 1);
	}
	return (str);
}

// int main()
// {
// 	printf("%s\n", ft_strtrim("abqbc", "abc"));
// 	printf("%s\n", ft_strtrim("xavocadoyz", "xyz"));
// 	return (0);
// }