/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_moves.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yodahani <yodahani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 18:22:34 by yodahani          #+#    #+#             */
/*   Updated: 2023/03/04 09:59:53 by yodahani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_moveb(t_list **a, t_list **b, t_thelper *t, void (*f)(t_list **))
{
	int	i;

	while ((*a))
	{
		if ((*a)->n <= t->max)
			break ;
		f(a);
	}
	i = t->i - t->chunk / 2;
	while ((*a) && (*a)->n <= t->max)
	{
		pb(b, a);
		t->k ++;
		ft_search(*a, t);
		if ((*b)->n <= t->tab[i] && (*a) && t->move == 2)
			rr(a, b);
		else if ((*b)->n <= t->tab[i])
			rb(b);
	}
}

void	ft_move(t_list **a, t_list **b, t_thelper *t)
{
	if (1 == t->move)
		ft_moveb(a, b, t, ra);
	else
		ft_moveb(a, b, t, rra);
}
