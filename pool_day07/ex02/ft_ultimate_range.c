/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedavis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/08 14:54:14 by bedavis           #+#    #+#             */
/*   Updated: 2019/08/08 17:18:28 by bedavis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int *arr;
	int length;

	i = 0;
	if (min >= max)
	{
		*range = (void *)0;
		return (0);
	}
	else
	{
		length = max - min;
		arr = malloc(length * sizeof(int*));
		while (i < length)
		{
			arr[i] = min + i;
			i++;
		}
		*range = arr;
		return (length);
	}
}
