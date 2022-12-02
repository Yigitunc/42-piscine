/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytunc <ytunc@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 18:35:22 by ytunc             #+#    #+#             */
/*   Updated: 2022/09/27 13:53:28 by ytunc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*tstr;
	int		i;
	int		j;
	int		k;
	int		count;

	i = 0;
	k = 0;
	count = 1;
	j = 0;
	while (j < size)
		count += ft_strlen(strs[j++]) + ft_strlen(sep);
	tstr = malloc(sizeof(char *) * count);
	j = -1;
	while (++j < size)
	{
		k = 0;
		while (strs[j][k] != '\0')
			tstr[i++] = strs[j][k++];
		k = 0;
		while (sep[k] != '\0' && j < size - 1)
			tstr[i++] = sep[k++];
	}
	tstr[i] = '\0';
	return (tstr);
}

/*
#include <stdio.h>
int	main(void)
{
	int	rows = 4;
	char **str = malloc(sizeof(char*) * rows);
	str[0] = "yigit";
	str[1] = "tunc";
	str[2] = "from";
	str[3] = "istanbul";
	char *sep = "<a>";
	char *res = ft_strjoin(rows,str,sep);
	
	printf("%s\n",res);
}
*/