/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hualhash <hualhash@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 16:38:54 by hualhash          #+#    #+#             */
/*   Updated: 2022/09/24 16:38:55 by hualhash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_toupper (int c)
{
    if (c >= 'a' && c <= 'z')
    c -= 32;
    return (c);
}

#include <stdio.h>
#include <ctype.h>
int main() {
    char c;

    c = 'm';
    printf("%c -> %c", c, ft_toupper(c));

    c = 'D';
    printf("\n%c -> %c", c, ft_toupper(c));

    c = '9';
    printf("\n%c -> %c", c, ft_toupper(c));
    return 0;
}