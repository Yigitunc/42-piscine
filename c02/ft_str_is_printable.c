/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytunc <ytunc@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 21:53:52 by ytunc             #+#    #+#             */
/*   Updated: 2022/09/24 10:04:08 by ytunc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;
	int	res;

	if (str[0] == '\0')
		return (1);
	i = 0;
	res = 1;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] == 127)
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
	char c[] = "213123";
	int r;
	r = ft_str_is_printable(c);
	printf("%d\n", r);
	return (0);
}
*/