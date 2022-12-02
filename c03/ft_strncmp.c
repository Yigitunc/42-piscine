/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytunc <ytunc@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 09:13:31 by ytunc             #+#    #+#             */
/*   Updated: 2022/09/24 23:35:12 by ytunc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i] && i < n - 1)
		i++;
	return (s1[i] - s2[i]);
}

#include <stdio.h>
#include <string.h>
int main(void)
{
	char *c1;
	char *c2;
	int res;

	c1 = "yigit";
	c2 = "yiunc";

	printf("Result : %d \nOriginal Result = %d \n",ft_strncmp(c1,c2,3),strncmp(c1,c2,3));
}

