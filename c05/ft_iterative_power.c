/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytunc <ytunc@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 16:30:28 by ytunc             #+#    #+#             */
/*   Updated: 2022/09/24 12:32:24 by ytunc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	y;

	i = 0;
	y = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (i < power - 1)
	{
		nb *= y;
		i++;
	}
	return (nb);
}
/*
#include <stdio.h>
int	main(void)
{
	int	res;

	res = ft_iterative_power(2,3);
	printf("Result : %d \n", res);
}
*/
