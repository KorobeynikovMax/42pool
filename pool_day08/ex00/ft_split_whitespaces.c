/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedavis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/09 11:36:50 by bedavis           #+#    #+#             */
/*   Updated: 2019/08/09 22:44:56 by bedavis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_len(int n, char *str)
{
	int i;

	i = n;
	while (!(str[n] == ' ' || str[n] == '\t' || str[n] == '\n' ||
				str[n] == '\0'))
		n++;
	return (n - i);
}

int		ft_count_w(char *str)
{
	int count;
	int i;

	i = 0;
	count = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
		i++;
	if (str[i] != '\0')
		count = 1;
	while (str[i] != '\0')
	{
		if ((str[i] != ' ' || str[i] != '\n' || str[i] != '\t') &&
				(str[i - 1] == ' ' || str[i - 1] == '\n' || str[i - 1] == '\t'))
		{
			count++;
		}
		i++;
	}
	return (count);
}

char	**ft_split_whitespaces(char *str)
{
	int		i;
	int		j;
	int		k;
	char	**c;

	i = 0;
	j = 0;
	c = (char**)malloc(sizeof(char *) * ft_count_w(str));
	while (str && str[j])
	{
		k = 1;
		while (str[j] == ' ' || str[j] == '\n' || str[j] == '\t')
			j++;
		*(c + i) = (char *)malloc(sizeof(char) * ((ft_len(j, str) + 1)));
		while (!(str[j] == ' ' || str[j] == '\n' || str[j] == '\t' ||
					str[j] == '\0'))
		{
			c[i][k - 1] = str[j++];
			k++;
		}
		c[i++][k - 1] = '\0';
	}
	c[i] = 0;
	return (&c[0]);
}
