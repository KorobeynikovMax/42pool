/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedavis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 11:27:15 by bedavis           #+#    #+#             */
/*   Updated: 2019/08/06 12:37:12 by bedavis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str && str[i] != '\0')
	{
		if ((str[i] >= 65) && (str[i] <= 90))
			str[i] += 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	ft_strlowcase(str);
	while (str && str[i] != '\0')
	{
		while (str[i] == ' ' || str[i] == '+' || str[i] == '-')
			i++;
		if (str[i] >= 97 && str[i] <= 122)
			str[i] -= 32;
		i++;
		while (str[i] >= 97 && str[i] <= 122)
			i++;
	}
	return (str);
}
