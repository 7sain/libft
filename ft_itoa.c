/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hualhash <hualhash@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 15:40:11 by hualhash          #+#    #+#             */
/*   Updated: 2022/11/24 17:27:35 by hualhash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// converts an integer to a string.

#include "libft.h"

size_t	ft_nb_len(int nb)
{
	int	len;

	len = 0;
	if (nb <= 0)
		len++;
	while (nb)
	{
		len++;
		nb /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*str;
	long	nb;

	len = ft_nb_len(n);
	nb = n;
	str = malloc(sizeof(char) * len + 1);
	if (!str)
		return (NULL);
	if (nb < 0)
	{
		str[0] = '-';
		nb *= -1;
	}
	if (nb == 0)
		str[0] = '0';
	str[len--] = '\0';
	while (nb)
	{
		str[len] = nb % 10 + '0';
		len--;
		nb /= 10;
	}
	return (str);
}
//469
// int	main(void)
// {
// 	printf("%s\n", ft_itoa(-21)); 
// 	// printf("%s\n", ft_itoa(987654321));
// 	// printf("%s\n", ft_itoa(-123456789));
// }

// 	// printf("hassian is gay , n == %d\n", n);
// 	// printf("hassian is gay , len == %d\n", len);