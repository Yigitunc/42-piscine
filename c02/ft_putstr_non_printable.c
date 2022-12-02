/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytunc <ytunc@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 21:39:25 by ytunc             #+#    #+#             */
/*   Updated: 2022/09/22 16:45:36 by ytunc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	c;
	char	d;
	char	*hex;

	hex = "0123456789abcdef";
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 31 && str[i] < 127)
			ft_putchar(str[i]);
		else
		{
			c = hex[(unsigned char)str[i] / 16];
			d = hex[(unsigned char)str[i] % 16];
			ft_putchar(92);
			ft_putchar(c);
			ft_putchar(d);
		}
		i++;
	}
}
/*
int	main(void)
{
	char	c[] = "Coucou\ntu 123 and \xAyes";
	ft_putstr_non_printable(c);
	write(1, "\n", 1);
}
*/
