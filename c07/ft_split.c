/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytunc <ytunc@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 18:08:45 by ytunc             #+#    #+#             */
/*   Updated: 2022/09/27 09:15:54 by ytunc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	c_sep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	if (c == '\0')
		return (1);
	return (0);
}

int	c_words(char *str, char *charset)
{
	int	i;
	int	word;

	i = 0;
	word = 0;
	while (str[i] != '\0')
	{
		if (c_sep(str[i + 1], charset) == 1
			&& c_sep(str[i], charset) == 0)
			word++;
		i++;
	}
	return (word);
}

void	w_word(char *dest, char *str, char *charset)
{
	int	i;

	i = 0;
	while (c_sep(str[i], charset) == 0)
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
}

void	write_sp(char **split, char *str, char *charset)
{
	int	w;
	int	i;
	int	j;

	i = 0;
	w = 0;
	while (str[i] != '\0')
	{
		if (c_sep(str[i], charset) == 1)
			i++;
		else
		{
			j = 0;
			while (c_sep(str[i + j], charset) == 0)
				j++;
			split[w] = malloc(sizeof(char) * (j + 1));
			w_word(split[w], str + i, charset);
			w++;
			i += j;
		}
	}
}

char	**ft_split(char *str, char *charset)
{
	char	**res;
	int		word;

	word = c_words(str, charset);
	res = malloc(sizeof(char *) * (word + 1));
	res[word] = 0;
	write_sp(res, str, charset);
	return (res);
}
/*
#include <stdio.h>
int main ()
{
	char *str = "hello this is.a string .of each.tsad.asdda";
	char *charset = ".";
	char **x = ft_split(str, charset);
	int i = 0;
	int j = 0;
	
	while(x[i])
	{
		j = 0;
		while(x[i][j])
		{
			printf("%c", x[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}
	return 0;
}
*/
