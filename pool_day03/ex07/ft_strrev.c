/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedavis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/02 22:40:12 by bedavis           #+#    #+#             */
/*   Updated: 2019/08/02 23:37:20 by bedavis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(char *a, char *b)
{
	char c;

	c = *a;
	*a = *b;
	*b = c;
}

int	ft_strlen(char *str)
{
	int i;

	i = -1;
	while (str[++i])
	{
	}
	return (i);
}

char	*ft_strrev(char *str)
{
	int konec;
	int i;

	i = 0;
	konec = ft_strlen(str) - 1;
	while (i < konec)
	{
		ft_swap(str + i, str + konec);
		i++;
		konec--;
	}
	return (str);
}
