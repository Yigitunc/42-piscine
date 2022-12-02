/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytunc <ytunc@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 10:13:51 by ytunc             #+#    #+#             */
/*   Updated: 2022/09/21 13:37:05 by ytunc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	y;

	i = 0;
	y = 0;
	while (to_find[i] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		y = 0;
		if (str[i] == to_find[y])
		{
			while (to_find[y] == str[i + y])
			{
				y++;
				if (to_find[y] == '\0')
					return (&str[i]);
			}
		}
		i++;
	}
	return (0);
}
