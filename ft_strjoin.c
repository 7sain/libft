/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hualhash <hualhash@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 21:06:54 by hualhash          #+#    #+#             */
/*   Updated: 2022/10/24 20:23:58 by hualhash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	z;
	char	*blank;
	char	len;

	i = 0;
	z = 0;
	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	blank = (char *)malloc(sizeof(char) * (len + 1));
	if (!(blank))
		return (NULL);
	while (s1[i] != '\0')
	{
		blank[i] = s1[i];
		i++;
	}
	while (s2[z] != '\0')
		blank[i++] = s2[z++];
	blank[i] = '\0';
	return (blank);
}

// int main()
// {
// 	char s1[] = "Husain ";
// 	char s2[] = "Alhashmi";

// 	printf("%s\n", ft_strjoin(s1, s2));

// 	return 0;
// }