/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrc_bonus.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yodahani <yodahani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 10:36:20 by yodahani          #+#    #+#             */
/*   Updated: 2023/03/01 16:12:02 by yodahani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "instructions_bonus.h"

void	rrc(t_list **ps)
{
	t_list	*pp;
	t_list	*p;

	if (!ps || !*ps || !(*ps)->next)
		return ;
	pp = ft_lstlast(*ps);
	p = *ps;
	while (p)
	{
		if (pp == p->next)
		{
			p->next = NULL;
			ft_lstadd_front(ps, pp);
		}
		p = p->next;
	}
}

void	rra(t_list **a)
{
	rrc(a);
}

void	rrb(t_list **b)
{
	rrc(b);
}

void	rrr(t_list **a, t_list **b)
{
	rrc(a);
	rrc(b);
}
