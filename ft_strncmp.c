/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hualhash <hualhash@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 16:38:42 by hualhash          #+#    #+#             */
/*   Updated: 2022/10/24 16:56:35 by hualhash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

// #include <stdio.h>
// #include <string.h>

// int main () {
//    char str1[20];
//    char str2[20];
//    int result;

//    //Assigning the value to the string str1
//    strcpy(str1, "BBBhfgh");

//    //Assigning the value to the string str2
//    strcpy(str2, "BBBcvvfhfc");

//    //This will compare the first 3 characters
//    result = ft_strncmp(str1, str2, 3);

//    if(result > 0) {
//       printf("ASCII value of first
//unmatched character of str1 is greater than str2");
//    } else if(result < 0) {
//       printf("ASCII value of first
//unmatched character of str1 is less than str2");
//    } else {
//       printf("Both the strings str1 and str2 are equal");
//    }

//    return 0;
// }
