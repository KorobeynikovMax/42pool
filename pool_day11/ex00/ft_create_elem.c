/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedavis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/14 11:20:56 by bedavis           #+#    #+#             */
/*   Updated: 2019/08/14 15:26:21 by bedavis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_create_elem(void *data)
{
	t_list *t;

	if (!(t = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	t->data = data;
	t->next = NULL;
	return (t);
}
