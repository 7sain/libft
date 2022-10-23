/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hualhash <hualhash@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 16:37:41 by hualhash          #+#    #+#             */
/*   Updated: 2022/10/23 20:30:02 by hualhash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	len;

	len = 0;
	if (dstsize != 0)
	{
		while (len < (dstsize - 1) && src[len] != '\0')
		{
			dst[len] = src[len];
			len++;
		}
		dst[len] = '\0';
	}
	return (ft_strlen(src));
}

// int		main(void)
//  {
//  	char	dest[50];
//  	char	*src;
//  	int		size;

//  	src = "";
//  	size = 0;
//  	printf("%zu\n", ft_strlcpy(dest, src, size));
//  	printf(".%s.\n\n", dest);
//  	printf("%zu\n", strlcpy(dest, src, size));
//  	printf(".%s.\n\n", dest);
//  }
