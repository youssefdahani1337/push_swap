/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_pos.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yodahani <yodahani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 10:03:45 by yodahani          #+#    #+#             */
/*   Updated: 2023/03/01 20:40:14 by yodahani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_checkpos(t_list *lst, t_thelper *t)
{
	int	top;

	top = ft_checktop(&lst, *t);
	if (top == -1)
		t->move = 2;
	else
		t->move = 1;
	return (t->move);
}

int	ft_checktop(t_list **a, t_thelper t)
{
	int	i;
	int	size;
	int	top;

	top = -1;
	i = -1;
	size = ft_lstsize((*a));
	while (++i < size / 2)
	{
		if ((*a)->n == t.tab[t.size])
		{
			top = i;
			break ;
		}
		(*a) = (*a)->next;
	}
	return (top);
}
