/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytunc <ytunc@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 10:59:09 by ytunc             #+#    #+#             */
/*   Updated: 2022/09/17 10:10:35 by ytunc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
	{
		i++;
	}	
	return (i);
}
/*
 int	main(void)
 {
 	char	*y;

 	y = "MyNameIsYigit";
 	printf("%d\n", ft_strlen(y));
 	return (0);
 }
 */
