/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedavis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/05 17:02:46 by bedavis           #+#    #+#             */
/*   Updated: 2019/08/05 18:20:30 by bedavis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int len;
	int i;
	int j;

	len = -1;
	i = 0;
	while (to_find && to_find[++len])
	{
	}
	if (len == 0)
		return (str);
	while (str && str[i])
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			if (j == (len - 1))
				return (str + i);
			j++;
		}
		i++;
	}
	return ((void*)0);
}
