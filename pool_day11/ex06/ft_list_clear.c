/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedavis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/14 20:05:08 by bedavis           #+#    #+#             */
/*   Updated: 2019/08/14 20:17:11 by bedavis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list *head;
	t_list *t;

	head = *begin_list;
	while (head != NULL)
	{
		t = head->next;
		free(head);
		head = t;
	}
	*begin_list = NULL;
}
