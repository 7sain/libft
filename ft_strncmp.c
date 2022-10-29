/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hualhash <hualhash@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 16:38:42 by hualhash          #+#    #+#             */
/*   Updated: 2022/10/25 17:04:56 by hualhash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// compare the null-terminated strings s1 & s2, not more than n characters.

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (n && *s1 && *s1 == *s2)
	{
	s1++;
	s2++;
	n--;
	}
	if (n == 0)
		return (0);
	return ((unsigned char)*s1 - (unsigned char)*s2);
}

// int main (void)
// {
// 	char	str1[20];
// 	char	str2[20];
// 	int		result;
// 	strcpy(str1, "BBBhfgh");
// 	strcpy(str2, "BBBcvvfhfc");
// 	result = ft_strncmp(str1, str2, 4);
// 	printf("The dif is: %d\n", result);
// 	if (result > 0)
// 	{
// 		printf("s1 > s2");
// 	}
// 	else if (result < 0)
// 	{
// 		printf("s1 < s2");
// 	}
// 	else
// 	{
// 		printf("s1 = s2");
// 	}
// 	return (0);
// }
