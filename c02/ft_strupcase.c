/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytunc <ytunc@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 00:20:42 by ytunc             #+#    #+#             */
/*   Updated: 2022/09/24 10:04:01 by ytunc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (96 < str[i] && str[i] < 123)
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}

/*
#include <stdio.h>
int main(void)
{
	char c[] = "aaaa";
	ft_strupcase(c);
	printf("%s\n", c);
	return (0);
}
*/