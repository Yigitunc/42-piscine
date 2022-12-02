/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytunc <ytunc@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 09:13:31 by ytunc             #+#    #+#             */
/*   Updated: 2022/09/24 23:35:40 by ytunc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	y;

	i = 0;
	y = 0;
	while (dest[i] != '\0')
		i++;
	while (src[y] != '\0')
	{
		dest[i] = src[y];
		i++;
		y++;
	}
	dest[i] = '\0';
	return (dest);
}

#include <stdio.h>
#include <string.h>
int main(void)
{
	char s1[40] = "hello";
	char s2[40] = " world";

	printf("%s\n",ft_strcat(s1,s2));
	printf("r:%s\n",strcat(s1,s2));
	return 0;
}