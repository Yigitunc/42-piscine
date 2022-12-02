/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytunc <ytunc@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 17:11:26 by ytunc             #+#    #+#             */
/*   Updated: 2022/09/27 16:05:24 by ytunc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int	i;
	int	ret;
	int	x;

	x = 0;
	ret = 0;
	if (nb <= 1)
		return (2);
	while (ret < 1)
	{
		i = 2;
		x = 0;
		while (i <= nb / i)
		{
			if (nb % i == 0)
				x = 1;
			i++;
		}
		if (x == 0)
			ret = 2;
		nb++;
	}
	return (nb - 1);
}

#include <stdio.h>
int	main(void)
{
	int	res;

	res = ft_find_next_prime(2147483646);
	printf("Result : %d \n", res);
}

