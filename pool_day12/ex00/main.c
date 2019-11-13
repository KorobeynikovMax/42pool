/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedavis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 13:53:38 by bedavis           #+#    #+#             */
/*   Updated: 2019/08/15 17:36:27 by bedavis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void		print_err(int i)
{
	if (i == 1)
		ft_putstr("File name missing.\n");
	if (i == 2)
		ft_putstr("Too many arguments.\n");
	if (i == 3)
		ft_putstr("No such file or directory.\n");
}

int			main(int argc, char **argv)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE + 1];

	if (argc < 2)
		print_err(1);
	if (argc > 2)
		print_err(2);
	if (argc != 2)
		return (0);
	fd = open(argv[1], O_RDONLY);
	if (fd < 0)
	{
		print_err(3);
		return (0);
	}
	ret = read(fd, buf, BUF_SIZE);
	if (ret)
	{
		buf[ret] = '\0';
		ft_putstr(buf);
	}
	close(fd);
	return (0);
}
