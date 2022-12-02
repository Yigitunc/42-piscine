/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytunc <ytunc@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 12:32:07 by ytunc             #+#    #+#             */
/*   Updated: 2022/09/21 15:20:52 by ytunc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *argv)
{
	int	i;

	i = 0;
	while (argv[i] != '\0')
	{
		ft_putchar(argv[i]);
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int	i;

	i = 0;
	while (i < argc - 1)
	{
		ft_putstr(argv[argc - i - 1]);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
