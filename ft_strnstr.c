/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hualhash <hualhash@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 16:38:45 by hualhash          #+#    #+#             */
/*   Updated: 2022/09/28 15:24:31 by hualhash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	
	if(*needle == 0 || haystack == needle)
		return ((char *)haystack);
	i = strlen(needle);
	while (*haystack && i <= len)
	{
		if (!(strncmp((char *)haystack, (char *)needle, i)))
		return ((char *)haystack);
		len--;
		haystack++;
	}
	return (NULL);
}

int main()

{
	char str1[] = "crcrakplaro";
	char str2[] = "cra";
	printf("%s\n", ft_strnstr(str1, str2, 58));
}