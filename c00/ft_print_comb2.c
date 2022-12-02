/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytunc <ytunc@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 08:12:00 by ytunc             #+#    #+#             */
/*   Updated: 2022/09/15 11:40:30 by ytunc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	x;
	int	y;

	x = 0;
	while (x <= 98)
	{
		y = x;
		while (y <= 99)
		{	
			if (x != y)
			{
				ft_putchar((x / 10) + 48);
				ft_putchar((x % 10) + 48);
				ft_putchar(' ');
				ft_putchar((y / 10) + 48);
				ft_putchar((y % 10) + 48);
				if (x != 98)
					write(1, ", ", 2);
			}
		y++;
		}
		x++;
	}
}
