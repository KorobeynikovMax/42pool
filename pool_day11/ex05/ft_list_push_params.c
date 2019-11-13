/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedavis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/14 18:59:52 by bedavis           #+#    #+#             */
/*   Updated: 2019/08/14 19:26:19 by bedavis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list		*ft_list_push_params(int ac, char **av)
{
	t_list	*t;
	t_list	*head;
	int		i;

	t = NULL;
	head = NULL;
	i = 0;
	while (i < ac)
	{
		head = ft_create_elem(av[i]);
		head->next = t;
		t = head;
		i++;
	}
	return (head);
}
