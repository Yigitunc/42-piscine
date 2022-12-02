/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytunc <ytunc@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 18:08:07 by ytunc             #+#    #+#             */
/*   Updated: 2022/09/25 20:27:09 by ytunc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*arr;
	int	diff;
	int	i;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	diff = max - min;
	arr = malloc(sizeof(int) * diff);
	if (arr != NULL)
	{
		while (i < diff)
		{
			arr[i] = min;
			min++;
			i++;
		}
		*range = arr;
		return (i);
	}
	else
		return (-1);
}
/*
#include <stdio.h>
int main (void)
{
	int *dd;
	int s;
	int i;
	int max = 1;
	int min = 1;

	i = 0;
	s = ft_ultimate_range(&dd,min,max);
	if(dd != NULL)
	{
		while (i < max - min)
		{
			printf("%d, ",dd[i]);
			i++;
		}
		printf("\n%d",s);
	}
}
*/
