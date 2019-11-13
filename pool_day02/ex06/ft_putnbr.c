/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedavis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/01 20:02:11 by bedavis           #+#    #+#             */
/*   Updated: 2019/08/01 20:54:18 by bedavis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	ft_putnbr(int nb);

void	ft_putnbr(int nb)
{
	int nn;
	int i;

	nn = nb;
	i = 0;
	if (nn < 0)
		ft_putchar('-');
	if (nn == 0)
		ft_putchar('0');
	while (nn != 0)
	{
		i++;
		nn = nn / 10;
	}
	while (i-- != 0)
	{
		if (i != 1)
		{
			ft_putchar(nb / (10 * (i - 1)) + '0');
			nb = nb % (10 * (i - 1));
		}
		else
			ft_putchar('0' + (char)nb);
	}
	return ;
}
