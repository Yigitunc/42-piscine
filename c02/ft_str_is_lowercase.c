/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytunc <ytunc@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 21:42:57 by ytunc             #+#    #+#             */
/*   Updated: 2022/09/24 10:04:23 by ytunc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	res;

	if (str[0] == '\0')
		return (1);
	i = 0;
	res = 1;
	while (str[i] != '\0')
	{
		if (str[i] < 97 || str[i] > 122)
		{
			res = 0;
		}	
		i++;
	}
	return (res);
}

/*
#include <stdio.h>
int main(void)
{
	char c[] = "aaa";
	int r;
	r = ft_str_is_lowercase(c);
	printf("%d\n", r);
	return (0);
}
*/