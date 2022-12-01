#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	z;
	char	*blank;
	char	len;

	i = 0;
	z = 0;
	if (!s1 && !s2)
		return (NULL);
	if (!s1 && s2)
		return (((char *)s2));
	if (s1 && !s2)
		return (((char *)s1));
	len = ft_strlen(s1) + ft_strlen(s2);
	blank = (char *)malloc(sizeof(char) * (len + 1));
	if (!(blank))
		return (NULL);
	while (s1[i] != '\0')
	{
		blank[i] = s1[i];
		i++;
	}
	while (s2[z] != '\0')
		blank[i++] = s2[z++];
	blank[i] = '\0';
	return (blank);
}

# include<stdio.h>

int main(void)
{
	printf("%s", ft_strjoin("Husain", "NULL"));
}
