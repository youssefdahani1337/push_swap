/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_chunk.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yodahani <yodahani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 09:52:49 by yodahani          #+#    #+#             */
/*   Updated: 2023/03/02 12:08:31 by yodahani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_sort(t_list *a)
{
	while (a->next)
	{
		if (a->n > a->next->n)
			return (0);
		a = a->next;
	}
	return (1);
}

int	ft_check_sorttab(t_list *a, t_thelper t)
{
	int	i;

	i = t.size - ft_lstsize(a);
	while (a && i < t.size)
	{
		if (t.tab[i] != a->n)
			return (0);
		i++;
		a = a->next;
	}
	return (1);
}

t_thelper	*ft_search(t_list *a, t_thelper *t)
{
	int	i;
	int	size;

	i = -1;
	size = ft_lstsize(a) / 2;
	while (a && ++i < size)
	{
		if (a->n <= t->max)
		{
			t->move = 1;
			return (t);
		}
		a = a->next;
	}
	t->move = 2;
	return (t);
}
