/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yodahani <yodahani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 08:18:11 by yodahani          #+#    #+#             */
/*   Updated: 2023/03/04 09:55:00 by yodahani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_pushswap(t_list **a, t_list **b)
{
	int	size;

	size = ft_lstsize(*a);
	if (size == 1)
		return ;
	else if (size == 2)
		ft_sort_two(a);
	else if (size == 3)
		ft_sort_three(a);
	else if (size <= 5)
		ft_sort_five(a, b);
	else
		ft_sort(a, b);
}

void	ft_sort(t_list **a, t_list **b)
{
	t_thelper	t;

	t.size = ft_lstsize(*a);
	if (t.size < 101)
		t.chunk = t.size / 3;
	else if (t.size < 300)
		t.chunk = t.size / 5;
	else
		t.chunk = t.size / 7;
	t.tab = ft_nsort(*a, t.size);
	t.i = t.chunk - 1;
	t.max = t.tab[t.i];
	t.iter = t.size / t.chunk;
	ft_push_tob(a, b, t);
	ft_push_toa(a, b, t);
	free(t.tab);
}

void	ft_push_tob(t_list **a, t_list **b, t_thelper t)
{
	int	k;

	k = 0;
	while ((*a) && k < t.iter && !ft_check_sorttab(*a, t))
	{
		t.k = 0;
		while (t.k < t.chunk)
			ft_move(a, b, ft_search(*a, &t));
		ft_incr(&t);
		k ++;
	}
	if (*a && ft_lstsize(*a) <= 5)
		ft_pushswap(a, b);
	else
	{
		while (*a && !ft_check_sorttab(*a, t))
			pb(b, a);
	}
}

void	ft_push_toa(t_list **a, t_list **b, t_thelper t)
{
	int		c;

	c = 0;
	ft_getsize(*a, &t.size);
	while (*b)
	{
		if (t.tab[t.size] == (*b)->n)
			ft_move_me(b, a, NULL, &t.size);
		else if ((*b)->next != NULL && t.tab[t.size] == (*b)->next->n)
			ft_move_me(b, a, sb, &t.size);
		else if ((c == 0 || (ft_lstlast(*a)->n < (*b)->n)) && ++c)
			ft_subsort(a, b, t);
		else if (ft_check_in(t.tab[t.size], *b) == 1)
			rb(b);
		else if (ft_check_in(t.tab[t.size], *b) == 2)
			rrb(b);
		else
			ft_totop(a, b, &t, &c);
	}
	while (c --)
		rra(a);
}
