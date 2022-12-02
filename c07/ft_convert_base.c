/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytunc <ytunc@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 12:58:13 by ytunc             #+#    #+#             */
/*   Updated: 2022/09/27 09:13:15 by ytunc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_putnbr_base(int nbr, char *base, int base_n_to);

int	ft_letter_num(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	ft_str_control(char c, char *base)
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

int	ft_base_control(char *base, int *a)
{
	int	y;
	int	i;

	i = 0;
	while (base[i] != '\0')
	{	
		y = i + 1;
		while (base[y] != '\0')
		{
			if (base[y] == base[i])
				return (0);
			y++;
		}
		if (base[i] == '+' || base[i] == '-' || (base[i] < 33 || base[i] > 126))
			return (0);
		i++;
	}
	*a = i;
	return (1);
}

void	ft_check_nbr(char *nbr, int *x, int *s)
{
	int	i;

	i = 0;
	while (nbr[i] == ' ' || (nbr[i] >= 9 && nbr[i] <= 13))
		i++;
	while (nbr[i] == '-' || nbr[i] == '+')
	{
		if (nbr[i] == '-')
			*s *= -1;
		i++;
	}
	*x = i;
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int	res;
	int	i;
	int	s;
	int	base_n;
	int	base_n_to;

	i = 0;
	s = 1;
	res = 0;
	base_n = 0;
	base_n_to = 0;
	if (ft_base_control(base_from, &base_n) == 0
		|| ft_base_control(base_to, &base_n_to) == 0)
		return (0);
	ft_check_nbr (nbr, &i, &s);
	while ((nbr[i] != '\0') && ft_str_control(nbr[i], base_from) && \
	ft_base_control(base_from, &base_n) && ft_base_control(base_to, &base_n_to))
	{
		res = (res * base_n) + ft_letter_num(nbr[i], base_from);
		i++;
	}
	return (ft_putnbr_base(res * s, base_to, base_n_to));
}
/*
#include <stdio.h>
int	main(void)
{	
	char	*l;
	char	*d;

	l = ft_convert_base("445", "0123456789", "0123456789abcdef");
	d = ft_convert_base("988", "0123456789", "0123456789abcdef");
	printf("%s\n%s\n", l, d);
	return (0);
}
*/
