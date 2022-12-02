/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytunc <ytunc@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 10:53:07 by ytunc             #+#    #+#             */
/*   Updated: 2022/09/23 21:01:40 by ytunc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	result;

	i = 1;
	result = 1;
	if (nb == 0)
		return (1);
	else if (nb < 0)
		return (0);
	else
	{
		while (i <= nb)
		{
			result *= i;
			i++;
		}
		return (result);
	}
}
/*
#include <stdio.h>
int	main(void)
{
	int	res;

	res = ft_iterative_factorial(-2);
	printf("Result : %d \n", res);
}
*/
