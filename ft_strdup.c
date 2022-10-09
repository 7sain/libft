/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hualhash <hualhash@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 16:10:49 by hualhash          #+#    #+#             */
/*   Updated: 2022/10/09 19:43:25 by hualhash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s1)
{
	size_t i;
	size_t len;
	char *out;

	i = 0;
	len = ft_strlen(s1);
	out = malloc(sizeof(char) * len + 1);
	if (!out)
		return (NULL);
	while (i <= len)
	{
		out[i] = s1[i];
		i++;
	}
	return (out);
}

// int main()
// {
//     char source[] = "GeeksForGeeks";
 
//     // A copy of source is created dynamically
//     // and pointer to copy is returned.
//     char* target = ft_strdup(source);
 
//     printf("%s", target);
//     return 0;
// }