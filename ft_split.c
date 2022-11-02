/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hualhash <hualhash@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 16:52:12 by hualhash          #+#    #+#             */
/*   Updated: 2022/11/02 19:54:38 by hualhash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// static int	count_words(const char *str, char c)
// {
// 	int		i;
// 	int		trigger;

// 	i = 0;
// 	trigger = 0;
// 	while (*str)
// 	{
// 		if (*str != c && trigger == 0)
// 		{
// 			trigger = 1;
// 			i++;
// 		}
// 		else if (*str == c)
// 			trigger = 0;
// 		str++;
// 	}
// 	return (i);
// }

// static char	*word_dup(const char *str, int start, int finish)
// {
// 	char	*word;
// 	int		i;

// 	i = 0;
// 	word = malloc((finish - start + 1) * sizeof(char));
// 	while (start < finish)
// 		word[i++] = str[start++];
// 	word[i] = '\0';
// 	return (word);
// }

// char	**ft_split(char const *s, char c)
// {
// 	size_t	i;
// 	size_t	j;
// 	int		index;
// 	char	**split;

// 	if (!s)
// 		return (NULL);
// 	split = malloc((count_words(s, c) + 1) * sizeof(char *));
// 	if (!split)
// 		return (0);
// 	i = -1;
// 	j = 0;
// 	index = -1;
// 	while (++i <= ft_strlen(s))
// 	{
// 		if (s[i] != c && index < 0)
// 			index = i;
// 		else if ((s[i] == c || i == ft_strlen(s)) && index >= 0)
// 		{
// 			split[j++] = word_dup(s, index, i);
// 			index = -1;
// 		}
// 	}
// 	split[j] = 0;
// 	return (split);
// }

// int main()
// {
// 	printf("word cont: %d\n",
// count_words("husain faisal alhashmi ali stupid", ' '));
// 	printf("part2: %s", word_dup("husain faisal alhashmi", 0, 25));
// 	return (0);
// }

int	main(void)
{
	int		i;
	char	**tab;

	i = 0;
	tab = ft_split("123145611111117871", '1');
	while (i < 4)
	{
		printf("string %d : %s\n", i, tab[i]);
		i++;
	}
	return (0);
}


void	ft_spit(char const *s, char c, char **strr, int *i)
{
	/*
	i[1] has the amount of strings 7
	i[2] 2
	i[3] 26
	i[4] 0
	i[5] -1

	
	strr[0] husain\0
	strr[1] faisal\0
	strr[2] alhashmi 
	strr[3] and
	strr[4] ali
	strr[5] r
	strr[6] stupid
	strr[7] NULL
	*/
	while (++i[2] < i[1])
	{
		i[4] = 0;
		i[5] = -1;
		while (s[++i[3]] == c && s[i[3]])// multiple space
			;
		while (s[i[3]] != c && s[i[3]])// s("husain faisal             alhashmi and ali r stupid")
		{
			i[4]++;
			i[3]++;
		}
		strr[i[2]] = (char *)malloc(sizeof(*strr[i[2]]) * (i[4] + 1));
		i[3] -= i[4];// i[3] = i[3] - i[4];
		while (s[i[3]] != c && s[i[3]])
		{
			strr[i[2]][++i[5]] = s[i[3]];
			i[3]++;
		}
		strr[i[2]][++i[5]] = '\0';
	}
	strr[i[2]] = 0;
}

char	**ft_split(char const *s, char c)
{
	char	**strr;
	int		i[6];
	int		j;

	if (!s)
		return (0);
	j = -1;
	while (++j < 6)
		i[j] = -1;
	i[1] = 0;
	while (s[++i[0]])
	{
		if (i[0] == 0 && s[i[0]] != c && s[i[0]])
			i[1]++;
		if (s[i[0]] == c && s[i[0] + 1] != c && s[i[0] + 1])
			i[1]++;
	}
	strr = (char **)malloc(sizeof(*strr) * (i[1] + 1));
	if (!strr)
		return (0);
	ft_spit(s, c, strr, i);
	return (strr);
}
