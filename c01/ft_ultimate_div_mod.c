/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytunc <ytunc@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 08:30:25 by ytunc             #+#    #+#             */
/*   Updated: 2022/09/17 10:06:46 by ytunc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	mod = *a % *b;
	div = *a / *b;
	*a = div;
	*b = mod;
}
/*
 int	main(void)
 {
 	int	x;
 	int	y;

 	x = 12;
 	y = 5;
 	ft_ultimate_div_mod(&x, &y);
	printf("%d | %d ", x, y);
 	return (0); 
}
*/
