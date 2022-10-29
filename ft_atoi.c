/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hualhash <hualhash@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 16:31:08 by hualhash          #+#    #+#             */
/*   Updated: 2022/10/25 13:47:41 by hualhash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// converts a string to an integer.

#include "libft.h"

int	ft_atoi(const char *str)
{
	unsigned long long	res;
	int					sign;

	res = 0;
	sign = 1;
	while (*str == 32 || (*str >= 9 && *str <= 13))
	str++;
	if (*str == '-')
	sign *= -1;
	if (*str == '-' || *str == '+')
	str++;
	while (*str >= '0' && *str <= '9')
	{
		res = res * 10 + *str - '0';
		if (res > 9223372036854775807 && sign == 1)
			return (-1);
		else if (res > 9223372036854775807 && sign == -1)
			return (0);
		str++;
	}
	return (res * sign);
}
// int main () {
//    int val;
//    char str[20];
//    strcpy(str, "12abc");
//    val = ft_atoi(str);
//    printf("mine String value = %s, mine Int value = %d\n", str, val);

//    strcpy(str, "12abc");
//    val = atoi(str);
//    printf("there String value = %s, there Int value = %d\n", str, val);

//    return(0);
// }

// #include <string.h>
// #include <stdio.h>

// int main (int ac, char **av)
// {
// 	(void)ac;
// 	printf("our atoy :  %d \n",ft_atoi(av[1]));
// 	printf("real atoy :  %d \n",atoi(av[1]));
// 	return (0);
// }
