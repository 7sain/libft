/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hualhash <hualhash@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 16:38:51 by hualhash          #+#    #+#             */
/*   Updated: 2022/09/24 16:38:52 by hualhash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_tolower (int c)
{
    if (c >= 'A' && c <= 'Z')
    c += 32;
    return (c);
}

#include <stdio.h>
#include <ctype.h>
int main()
{
    char c, result;

    c = 'M';
    result = ft_tolower(c);
    printf("tolower(%c) = %c\n", c, result);

    c = 'H';
    result = ft_tolower(c);
    printf("tolower(%c) = %c\n", c, result);

    c = '+';
    result = ft_tolower(c);
    printf("tolower(%c) = %c\n", c, result);

    return 0;
}