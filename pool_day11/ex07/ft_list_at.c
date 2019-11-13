/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedavis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/14 20:23:45 by bedavis           #+#    #+#             */
/*   Updated: 2019/08/14 21:08:54 by bedavis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list				*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	t_list			*head;
	unsigned int	i;
	int				flag;

	i = 0;
	flag = 1;
	head = begin_list;
	if (!head)
		return (NULL);
	if (nbr == 0)
		return (begin_list);
	while ((i <= nbr) && flag)
	{
		if (i == nbr)
			return (head);
		if (head->next == NULL)
			flag = 0;
		head = head->next;
		i++;
	}
	return (NULL);
}
