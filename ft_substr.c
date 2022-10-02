/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hualhash <hualhash@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 20:22:40 by hualhash          #+#    #+#             */
/*   Updated: 2022/09/28 20:34:16 by hualhash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char* sub;

	i = 0;
	j = 0;
	if (!s || !(sub = (char*)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (s[i])
	{
		if (i >= start && j < len)
		{
			sub[j] = s[i];
			j++;
		}
		i++;
	}
	sub[j] = '\0';
	return (sub);
}

int main()
{
	char* str;

	str = ft_substr("Hello, 42Seoul!", 0, 15);
	printf("%s\n", str);

	return 0;
}