/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedavis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/14 21:33:52 by bedavis           #+#    #+#             */
/*   Updated: 2019/08/14 21:43:25 by bedavis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list *t;
	t_list *tail;
	t_list *head;

	head = *begin_list;
	tail = NULL;
	while (head)
	{
		t = head->next;
		head->next = tail;
		tail = head;
		head = t;
	}
	*begin_list = tail;
}
