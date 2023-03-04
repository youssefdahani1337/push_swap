/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_addons.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yodahani <yodahani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 09:54:53 by yodahani          #+#    #+#             */
/*   Updated: 2023/03/02 18:56:07 by yodahani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_min(t_list *a, int *len)
{
	int	min;
	int	i;

	i = 0;
	*len = 0;
	min = a->n;
	while (a)
	{
		if (a->n < min)
		{
			min = a->n;
			*len = i;
		}
		a = a->next;
		i ++;
	}
	return (min);
}

void	ft_incr(t_thelper *t)
{
	t->i += t->chunk;
	if (t->i >= t->size)
		t->i = t->size - 1;
	t->max = t->tab[t->i];
}

int	ft_check_in(int n, t_list *lst)
{
	int	size;
	int	i;

	i = 0;
	size = ft_lstsize(lst) / 2;
	while (i < size)
	{
		if (lst->n == n)
			return (1);
		lst = lst->next;
		i ++;
	}
	while (lst)
	{
		if (lst->n == n)
			return (2);
		lst = lst->next;
	}
	return (0);
}
