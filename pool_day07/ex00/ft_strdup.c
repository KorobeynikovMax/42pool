/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedavis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/08 11:23:59 by bedavis           #+#    #+#             */
/*   Updated: 2019/08/08 17:07:57 by bedavis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		length;
	int		i;
	char	*res;

	i = 0;
	length = 0;
	while (src && src[length] != '\0')
	{
		length++;
	}
	res = (char*)malloc(sizeof(char) * length + 1);
	if (res == (void *)0)
		return (res);
	while (src && src[i] != '\0')
	{
		res[i] = src[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}
