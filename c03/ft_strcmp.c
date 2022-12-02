/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytunc <ytunc@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 09:13:31 by ytunc             #+#    #+#             */
/*   Updated: 2022/09/25 11:31:55 by ytunc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

#include <stdio.h>
#include <string.h>
int main(void)
{
	char *c1;
	char *c2;

	c1 = "yigit";
	c2 = "yigitunc";

	printf("Result : %d \nOriginal Result = %d \n",ft_strcmp(c1,c2),strcmp(c1,c2));
}

