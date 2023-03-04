/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yodahani <yodahani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 14:05:17 by yodahani          #+#    #+#             */
/*   Updated: 2023/02/20 09:47:05 by yodahani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "instructions.h"

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
	ft_putstr_fd("ra\n", 1);
}

void	rb(t_list **b)
{
	r(b);
	ft_putstr_fd("rb\n", 1);
}

void	rr(t_list **a, t_list **b)
{
	r(a);
	r(b);
	ft_putstr_fd("rr\n", 1);
}
