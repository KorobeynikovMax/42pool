/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedavis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/08 14:06:59 by bedavis           #+#    #+#             */
/*   Updated: 2019/08/08 17:14:00 by bedavis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *arr;
	int i;

	i = 0;
	if (min >= max)
		return ((void *)0);
	arr = (int*)malloc(sizeof(*arr) * (max - min));
	while (min != max)
	{
		arr[i] = min;
		min++;
		i++;
	}
	return (arr);
}
