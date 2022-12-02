/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytunc <ytunc@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 01:16:49 by ytunc             #+#    #+#             */
/*   Updated: 2022/09/25 12:59:42 by ytunc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

int	ft_atoi_base(char *str, char *base)
{
	int	res;
	int	i;
	int	s;
	int	base_n;

	i = 0;
	s = 1;
	res = 0;
	base_n = 0;
	ft_base_control(base, &base_n);
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			s *= -1;
		i++;
	}
	while ((str[i] != '\0') && ft_str_control(str[i], base) && \
	ft_base_control(base, &base_n))
	{
		res = (res * base_n) + ft_letter_num(str[i], base);
		i++;
	}
	return (res * s);
}

#include <stdio.h>
int	main(void)
{	
	int	d;

	d = ft_atoi_base("12345", "01234567");
	printf("%d\n", d);
	return (0);
}
