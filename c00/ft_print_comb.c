/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytunc <ytunc@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 14:06:46 by ytunc             #+#    #+#             */
/*   Updated: 2022/09/15 11:35:22 by ytunc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char x)
{
	write(1, &x, 1);
}

void	ft_print_number(int one, int two, int thr)
{
	ft_putchar(one + 48);
	ft_putchar(two + 48);
	ft_putchar(thr + 48);
	if (! (one == 7 && two == 8 && thr == 9))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}	
}

void	ft_print_comb(void)
{
	int	one;
	int	two;
	int	thr;

	one = 0;
	while (one <= 7)
	{	
		two = one + 1;
		while (two <= 8)
		{
			thr = two + 1;
			while (thr <= 9)
			{
				ft_print_number (one, two, thr);
				thr++;
			}
			two++;
		}
		one++;
	}
}
