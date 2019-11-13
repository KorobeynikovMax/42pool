/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedavis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 15:38:37 by bedavis           #+#    #+#             */
/*   Updated: 2019/08/13 16:51:59 by bedavis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
int		ft_atoi(char *str);
void	ft_putnbr(int nb);

int		check(char x, int b)
{
	if (x == '/' && b == 0)
	{
		write(1, "Stop : division by zero\n", 24);
		return (0);
	}
	if (x == '%' && b == 0)
	{
		write(1, "Stop : modulo by zero\n", 22);
		return (0);
	}
	return (1);
}

int		main(int argc, char *argv[])
{
	int a;
	int b;

	if (argc != 4)
		return (0);
	a = ft_atoi(argv[1]);
	b = ft_atoi(argv[3]);
	if (check(*argv[2], b))
	{
		if (*argv[2] == '+')
			ft_putnbr(a + b);
		else if (*argv[2] == '-')
			ft_putnbr(a - b);
		else if (*argv[2] == '*')
			ft_putnbr(a * b);
		else if (*argv[2] == '/')
			ft_putnbr(a / b);
		else if (*argv[2] == '%')
			ft_putnbr(a % b);
		else
			write(1, "0", 1);
		write(1, "\n", 1);
	}
	return (0);
}
