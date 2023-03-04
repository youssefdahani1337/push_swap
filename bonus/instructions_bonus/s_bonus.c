/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_bonus.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yodahani <yodahani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 13:14:41 by yodahani          #+#    #+#             */
/*   Updated: 2023/03/01 16:12:17 by yodahani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "instructions_bonus.h"

void	s(t_list **ps)
{	
	t_list	*p;

	if (!ps || ps[0] == NULL || ps[0]->next == NULL)
		return ;
	p = *ps;
	*ps = p->next;
	p->next = (*ps)->next;
	(*ps)->next = p;
}

void	sa(t_list **a)
{
	s(a);
}

void	sb(t_list **b)
{
	s(b);
}

void	ss(t_list **a, t_list **b)
{
	s(a);
	s(b);
}
