/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hualhash <hualhash@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 16:31:08 by hualhash          #+#    #+#             */
/*   Updated: 2022/10/04 22:36:09 by hualhash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *str)
{
	int res;
	int	sign;

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
