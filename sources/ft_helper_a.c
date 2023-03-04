/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_helper_a.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yodahani <yodahani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 09:17:16 by yodahani          #+#    #+#             */
/*   Updated: 2023/03/04 09:17:58 by yodahani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_getsize(t_list *a, int *size)
{
	t_list	*tmp;

	tmp = a;
	while ((*size)-- && tmp)
		tmp = tmp->next;
}

void	ft_subsort(t_list **a, t_list **b, t_thelper t)
{
	pa(a, b);
	if (ft_check_in(t.tab[t.size], *b) == 1)
		rr(a, b);
	else
		ra(a);
}

void	ft_move_me(t_list **stack1, t_list **stack2,
		void (*f)(t_list **lst), int *size)
{
	if (f)
		f(stack1);
	pa(stack2, stack1);
	(*size)--;
}

void	ft_totop(t_list **a, t_list **b, t_thelper *t, int *c)
{
	t->size --;
	(*c)--;
	if (t->size >= 0 && ft_check_in(t->tab[t->size], *b) == 2)
		rrr(a, b);
	else
		rra(a);
}
