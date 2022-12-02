/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytunc <ytunc@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 01:22:55 by ytunc             #+#    #+#             */
/*   Updated: 2022/09/22 21:41:55 by ytunc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	r;

	i = 0;
	r = 0;
	while (src[r] != '\0')
		r++;
	if (size < 1)
		return (r);
	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (r);
}
/*
int main(void)
{
	char c[] = "yigitunc";
	char d[9];
	int i ;
	i = 7;
	ft_strlcpy(d, c, i);
	printf("%s\n",d);
}
*/
