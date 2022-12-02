/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytunc <ytunc@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 16:43:19 by ytunc             #+#    #+#             */
/*   Updated: 2022/09/23 21:47:44 by ytunc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	i = 0;
	while (i < 46341 && i <= nb)
	{
		if (i * i == nb)
			return (i);
		i++;
	}	
	return (0);
}

/*
#include <stdio.h>
int	main(void)
{
	printf("2147395600 : %d \n", ft_sqrt(2147395600));
	printf("49 : %d \n", ft_sqrt(49));
	printf("-49 : %d \n", ft_sqrt(-49));
	printf("0 : %d \n", ft_sqrt(0));
}
*/