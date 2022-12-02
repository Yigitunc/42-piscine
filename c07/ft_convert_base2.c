/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytunc <ytunc@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 12:58:14 by ytunc             #+#    #+#             */
/*   Updated: 2022/09/26 23:57:42 by ytunc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_len_base_to(int nbr, int base_n_to)
{
	int	i;

	i = 0;
	if (nbr < 0)
		nbr *= -1;
	while (nbr >= base_n_to)
	{	
		nbr /= base_n_to;
		i++;
	}
	return (i + 1);
}

char	ft_rec_base_to(char *base, unsigned int i, unsigned int base_n)
{
	if (i > base_n - 1)
	{
		ft_rec_base_to(base, i / base_n, base_n);
		i = i % base_n;
	}
	return (base[i]);
}

char	*ft_putnbr_base(int nbr, char *base, int base_n_to)
{
	char	*return_value;
	int		i;
	int		j;

	j = ft_len_base_to(nbr, base_n_to);
	i = 0;
	if (nbr < 0)
	{
		j = j + 1;
		return_value = malloc(sizeof(char) * j);
		return_value[i] = '-';
		nbr = nbr * -1;
		i++;
	}
	else
		return_value = malloc(sizeof(char) * j);
	while (j > i)
	{
		return_value[j - 1] = base[nbr % base_n_to];
		nbr /= base_n_to;
		j--;
	}
	return (return_value);
}
