/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytunc <ytunc@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 12:53:26 by ytunc             #+#    #+#             */
/*   Updated: 2022/09/23 10:19:02 by ytunc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strcmp(char *c1, char *c2)
{
	while (*c1 == *c2 && *c1 != '\0')
	{
		c1++;
		c2++;
	}
	return (*c1 - *c2);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}

int	main(int argc, char *argv[])
{
	char	*temp;
	int		i;
	int		j;

	i = 2;
	while (i <= argc)
	{
		j = 2;
		while (j <= argc - 1)
		{
			if (ft_strcmp(argv[j], argv[j - 1]) < 0)
			{	
				temp = argv[j];
				argv[j] = argv[j - 1];
				argv[j - 1] = temp;
			}
			j++;
		}
		i++;
	}
	i = 0;
	while (++i < argc)
		ft_putstr(argv[i]);
	return (0);
}
