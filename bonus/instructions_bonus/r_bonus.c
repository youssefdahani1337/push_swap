/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r_bonus.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yodahani <yodahani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 14:05:17 by yodahani          #+#    #+#             */
/*   Updated: 2023/03/01 16:11:34 by yodahani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "instructions_bonus.h"

void	r(t_list **ps)
{
	t_list	*p;
	t_list	*old_head;

	if (!ps || !*ps || !(*ps)->next)
		return ;
	p = ft_lstlast(*ps);
	old_head = *ps;
	p->next = *ps;
	*ps = (*ps)->next;
	old_head->next = NULL;
}

void	ra(t_list **a)
{
	r(a);
}

void	rb(t_list **b)
{
	r(b);
}

void	rr(t_list **a, t_list **b)
{
	r(a);
	r(b);
}
