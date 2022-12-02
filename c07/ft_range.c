/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytunc <ytunc@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 21:22:52 by ytunc             #+#    #+#             */
/*   Updated: 2022/09/27 13:51:49 by ytunc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*s;
	int	diff;

	i = 0;
	if (min >= max)
		return (NULL);
	diff = max - min;
	s = malloc(sizeof(int) * diff);
	if (s == NULL)
		return (NULL);
	else
	{
		while (i < diff)
		{
			s[i] = min + i;
			i++;
		}
		return (s);
	}
}
/*
#include <stdio.h>
int main (void)
{
	int *d;
	int i;

	i = 0;
	d = ft_range(1,4);
	while(d[i] != '\0')
	{
		printf("%d, ",d[i]);
		i++;
	}
}
*/