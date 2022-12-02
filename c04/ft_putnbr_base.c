/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytunc <ytunc@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 13:03:30 by ytunc             #+#    #+#             */
/*   Updated: 2022/09/24 13:30:45 by ytunc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_base_control(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == c)
			return (1);
		i++;
	}
	return (0);
}

void	ft_rec_base(char *base, unsigned int i, unsigned int base_n)
{
	if (i > base_n - 1)
	{
		ft_rec_base(base, i / base_n, base_n);
		i = i % base_n;
	}
	ft_putchar(base[i]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_n;
	int	err;

	err = 0;
	base_n = 0;
	while (base[base_n] != '\0')
	{
		if (base[base_n] == ' ' || base[base_n] == '+' || base[base_n] == '-'
			|| (base[base_n] >= 9 && base[base_n] <= 13)
			|| ft_base_control(base[base_n], base + base_n + 1))
			err = 1;
		base_n++;
	}
	if (err == 0 && base_n >= 2)
	{
		if (nbr < 0)
		{
			ft_putchar('-');
			ft_rec_base(base, -nbr, base_n);
		}
		else
			ft_rec_base(base, nbr, base_n);
	}
	else
		return ;
}
/*
#include <stdio.h>
int	main(void)
{	
	ft_putnbr_base(12314432, "01");
	return (0);
}
*/
