/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_helper.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yodahani <yodahani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 11:11:20 by yodahani          #+#    #+#             */
/*   Updated: 2023/03/04 09:35:16 by yodahani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_merge(int *tab, int size)
{
	int	i;
	int	j;
	int	swap;

	i = 0;
	while (i < size)
	{
		j = i;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				swap = tab[i];
				tab[i] = tab[j];
				tab[j] = swap;
			}
			j ++;
		}
		i ++;
	}
}

int	*ft_nsort(t_list *lst, int size)
{
	int	*tab;
	int	i;

	i = 0;
	tab = malloc(size * sizeof(int));
	if (!tab)
		return (ft_error("Malloc Error !!", NULL, &lst), NULL);
	while (lst)
	{
		tab[i ++] = lst->n;
		lst = lst->next;
	}
	ft_merge(tab, size);
	return (tab);
}
