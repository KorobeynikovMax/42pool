/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedavis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/14 11:52:24 by bedavis           #+#    #+#             */
/*   Updated: 2019/08/14 15:56:56 by bedavis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *head;

	head = *begin_list;
	if (head != NULL)
	{
		while (head->next != NULL)
		{
			head = head->next;
		}
		head->next = ft_create_elem(data);
	}
	else
		*begin_list = ft_create_elem(data);
}
