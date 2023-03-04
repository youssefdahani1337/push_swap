/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yodahani <yodahani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 13:14:41 by yodahani          #+#    #+#             */
/*   Updated: 2023/02/13 14:24:46 by yodahani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "instructions.h"

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
	ft_putstr_fd("sa\n", 1);
}

void	sb(t_list **b)
{
	s(b);
	ft_putstr_fd("sb\n", 1);
}

void	ss(t_list **a, t_list **b)
{
	s(a);
	s(b);
	ft_putstr_fd("ss\n", 1);
}
