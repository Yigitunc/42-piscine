/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytunc <ytunc@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 00:38:54 by ytunc             #+#    #+#             */
/*   Updated: 2022/09/24 10:06:43 by ytunc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_num(char c)
{
	if ('0' <= c && c <= '9')
		return (1);
	else
		return (0);
}

int	ft_alpha(char c)
{
	if (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z'))
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		while (ft_alpha(str[i]) == 0 && ft_num(str[i]) == 0)
			i++;
		if ('a' <= str[i] && str[i] <= 'z')
			str[i] -= 32;
		i++;
		while (str[i] != '\0' && (ft_alpha(str[i]) == 1 || ft_num(str[i]) == 1))
		{
			if ('A' <= str[i] && str[i] <= 'Z')
				str[i] += 32;
			i++;
		}
		if (str[i] != '\0')
			i++;
	}
	return (str);
}

/*
#include <stdio.h>
#include <unistd.h>
int main(void)
{
	int y;
	char c[] = "salut, comment tu vas ? 42mots quarene-deux; cinquante+et+un";
	
	ft_strcapitalize(c);	
	y = 0;
	while (c[y] != '\0')
	{
		write(1, &c[y], 1);
		y++;
	}
	write(1, "\n", 1);
	return (0);
}
*/