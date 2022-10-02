/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hualhash <hualhash@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 21:06:54 by hualhash          #+#    #+#             */
/*   Updated: 2022/09/28 21:08:58 by hualhash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	char* str;
	size_t	s1_len;
	size_t	s2_len;

	s1_len = strlen(s1);
	s2_len = strlen(s2);
	if (!s1 || !s2)
		return (NULL);
	if (!(str = (char*)malloc(sizeof(char) * (s1_len + s2_len + 1))))
		return (0);
	strlcpy(str, s1, s1_len + 1);
	strlcat(str + (s1_len), s2, s2_len + 1);
	return (str);
}

int main()
{
	char s1[] = "Husain ";
	char s2[] = "Alhashmi";

	printf("%s\n", ft_strjoin(s1, s2));

	return 0;
}