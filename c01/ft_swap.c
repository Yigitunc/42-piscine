/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytunc <ytunc@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 08:23:54 by ytunc             #+#    #+#             */
/*   Updated: 2022/09/17 10:05:36 by ytunc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*
 int	main(void)
 {
 	int	x;
 	int	y;

 	x = 42;
 	y = 12;
 	ft_swap(&x, &y);
 	printf("%d\n", x);
 	printf("%d\n", y);
 }
*/
