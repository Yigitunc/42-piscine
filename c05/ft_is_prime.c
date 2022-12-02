/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytunc <ytunc@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 16:51:18 by ytunc             #+#    #+#             */
/*   Updated: 2022/09/23 21:34:50 by ytunc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;
	int	ret;

	ret = 1;
	if (nb <= 0 || nb == 1)
		return (0);
	i = 2;
	while (i < nb)
	{
		if (nb % i == 0)
			ret = 0;
		i++;
	}	
	return (ret);
}
/*
#include <stdio.h>
int	main(void)
{
	int	res;

	res = ft_is_prime(2147483646);
	printf("Result : %d \n", res);
}
*/