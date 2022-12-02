/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytunc <ytunc@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 16:39:35 by ytunc             #+#    #+#             */
/*   Updated: 2022/09/23 21:46:45 by ytunc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	else
		return (nb *= ft_recursive_power(nb, power - 1));
}
/*
#include <stdio.h>
int	main(void)
{
	int	res;

	res = ft_recursive_power(0, 5);
	printf("Result : %d \n", res);
}
*/