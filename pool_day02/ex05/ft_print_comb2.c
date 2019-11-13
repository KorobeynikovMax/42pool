/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedavis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/01 17:25:19 by bedavis           #+#    #+#             */
/*   Updated: 2019/08/01 19:14:18 by bedavis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	ft_print_comb2(void);

void	print_number(int x, int y)
{
	ft_putchar('0' + (x / 10));
	ft_putchar('0' + (x % 10));
	ft_putchar(' ');
	ft_putchar('0' + (y / 10));
	ft_putchar('0' + (y % 10));
}

void	print_space(void)
{
	ft_putchar(',');
	ft_putchar(' ');
}

void	ft_print_comb2(void)
{
	int left;
	int right;

	left = 0;
	right = 0;
	while (left < 99)
	{
		if (right < 100)
			right++;
		if (right == 100)
		{
			left++;
			right = left + 1;
		}
		if (left < 99)
		{
			print_number(left, right);
			if (left < 98)
				print_space();
		}
	}
	return ;
}
