/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytunc <ytunc@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 21:36:45 by ytunc             #+#    #+#             */
/*   Updated: 2022/09/24 10:04:30 by ytunc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	res;

	if (str[0] == '\0')
		return (1);
	i = 0;
	res = 1;
	while (str[i] != '\0')
	{
		if (str[i] < 48 || str[i] > 57)
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
	char c[] = "12312";
	int r;
	r = ft_str_is_numeric(c);
	printf("%d\n", r);
	return (0);
}
*/
