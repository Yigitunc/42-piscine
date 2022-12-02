/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytunc <ytunc@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 08:26:02 by ytunc             #+#    #+#             */
/*   Updated: 2022/09/20 22:28:52 by ytunc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}
/*
 int	main(void)
 {
 	int	a;
 	int	b;
 	int	div;
 	int	mod;

 	a = 42;
 	b = 18;
 	ft_div_mod(a, b, &div, &mod);
 	printf("%d\n", div);
 	printf("%d\n", mod);
 }
*/
