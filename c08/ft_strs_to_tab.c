/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytunc <ytunc@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 19:03:41 by ytunc             #+#    #+#             */
/*   Updated: 2022/09/26 17:37:35 by ytunc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_str_copy(char *src)
{
	int		i;
	int		length;
	char	*ret;

	i = 0;
	length = ft_strlen(src);
	ret = (char *)malloc(sizeof(*src) * length + 1);
	if (ret == NULL)
		return (0);
	else
	{
		while (src[i])
		{
			ret[i] = src[i];
			i++;
		}
		ret[i] = '\0';
		return (ret);
	}
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*str;
	int			i;

	i = 0;
	str = malloc(sizeof(t_stock_str) * (ac + 1));
	if (str == NULL)
		return (NULL);
	while (i < ac)
	{
		str[i].str = av[i];
		str[i].copy = ft_str_copy(av[i]);
		str[i].size = ft_strlen(av[i]);
		i++;
	}
	str[i].str = 0;
	return (str);
}
