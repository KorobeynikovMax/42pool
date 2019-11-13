/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedavis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/14 17:24:57 by bedavis           #+#    #+#             */
/*   Updated: 2019/08/14 17:55:05 by bedavis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int			ft_list_size(t_list *begin_list)
{
	t_list	*head;
	int		count;

	count = 0;
	head = begin_list;
	if (head == NULL)
		return (count);
	count = 1;
	while (head->next != NULL)
	{
		head = head->next;
		count++;
	}
	return (count);
}
