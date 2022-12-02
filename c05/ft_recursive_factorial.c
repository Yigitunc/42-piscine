/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytunc <ytunc@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 15:30:25 by ytunc             #+#    #+#             */
/*   Updated: 2022/09/23 21:04:23 by ytunc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	else
		return (nb *= ft_recursive_factorial (nb - 1));
}
/*
#include <stdio.h>
int	main(void)
{
	int	res;

	res = ft_recursive_factorial(30);
	printf("Result : %d \n", res);
}
*/
