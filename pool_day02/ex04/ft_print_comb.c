/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedavis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/01 14:25:01 by bedavis           #+#    #+#             */
/*   Updated: 2019/08/01 19:38:25 by bedavis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putcharr(char c);
void	ft_print_comb(void);

void	print_number(char x, char y, char z)
{
	ft_putchar(x);
	ft_putchar(y);
	ft_putchar(z);
}

void	print_space(void)
{
	ft_putchar(',');
	ft_putchar(' ');
}

void	ft_print_comb(void)
{
	char digit[3];

	digit[0] = '0';
	digit[1] = '1';
	digit[2] = '2';
	while (digit[0] <= '7')
	{
		digit[1] = digit[0] + 1;
		while (digit[1] <= '8')
		{
			digit[2] = digit[1] + 1;
			while (digit[2] <= '9')
			{
				if (digit[2] != '2')
					print_space();
				print_number(digit[0], digit[1], digit[2]++);
			}
			digit[1]++;
		}
		digit[0]++;
	}
	return ;
}
