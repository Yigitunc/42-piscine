/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytunc <ytunc@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 17:30:04 by ytunc             #+#    #+#             */
/*   Updated: 2022/09/24 10:04:38 by ytunc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	res;

	if (str[0] == '\0')
		return (1);
	i = 0;
	res = 1;
	while (str[i] != '\0')
	{
		if (str[i] < 65 || (str[i] > 90 && str[i] < 97) || str[i] > 122)
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
	char c[] = "DASDa";
	int r;
	r = ft_str_is_alpha(c);
	printf("%d\n",r);
	return (0);
}
*/
