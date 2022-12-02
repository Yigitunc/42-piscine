/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytunc <ytunc@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 11:01:13 by ytunc             #+#    #+#             */
/*   Updated: 2022/09/27 12:10:25 by ytunc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	size_d;
	unsigned int	size_s;
	unsigned int	result;

	i = 0;
	size_s = ft_strlen(src);
	size_d = ft_strlen(dest);
	if (size_d < size)
		result = size_d + size_s;
	else
		result = size_s + size;
	if (size == 0)
		return (result);
	while (src[i] != '\0' && size_d + i < size - 1)
	{
		dest[size_d + i] = src[i];
		i++;
	}
	dest[size_d + i] = '\0';
	return (result);
}


#include <stdio.h>
#include <string.h>
int				main(void)
{
	char	*str_base;
	char	dest[100];
	char	dest2[100];
	char	*src;
	int		index;

	str_base = "Hello";
	src = " World";
	index = 0;
	while (index < 6)
	{
		dest[index] = str_base[index];
		dest2[index] = str_base[index];
		index++;
	}
	//printf("c  : (%lu) $%s$\n", strlcat(dest, src, 8), dest);
	printf("ft : (%d) $%s$\n", ft_strlcat(dest2, src, 8), dest2);
}
