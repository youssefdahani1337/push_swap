/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_small_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yodahani <yodahani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 08:23:48 by yodahani          #+#    #+#             */
/*   Updated: 2023/03/04 10:05:35 by yodahani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_two(t_list **a)
{
	if ((*a)->n > (*a)->next->n)
		sa(a);
}

void	ft_sort_three(t_list **a)
{
	if ((*a)->n > (*a)->next->n && (*a)->n > ft_lstlast(*a)->n)
		ra(a);
	if ((*a)->next->n > (*a)->n && (*a)->next->n > ft_lstlast(*a)->n)
		rra(a);
	ft_sort_two(a);
}

void	ft_sort_five(t_list **a, t_list **b)
{
	int	len;
	int	min;

	while (ft_lstsize(*a) > 3 && !ft_check_sort(*a))
	{
		min = ft_min(*a, &len);
		if (len < 2)
			ft_whilef(a, min, ra);
		else
			ft_whilef(a, min, rra);
		if (!ft_check_sort(*a))
			pb(b, a);
	}
	ft_sort_three(a);
	len = -1;
	while ((*b) && ++len < 2)
		pa(a, b);
}

void	ft_whilef(t_list **a, int min, void (*f)(t_list **a))
{
	while ((*a)->n != min && !ft_check_sort(*a))
		f(a);
}
