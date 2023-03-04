/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_bonus.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yodahani <yodahani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 13:22:51 by yodahani          #+#    #+#             */
/*   Updated: 2023/03/01 16:11:19 by yodahani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "instructions_bonus.h"

void	p(t_list **ps1, t_list **ps2)
{
	t_list	*ps;

	if (!ps1 || !ps2 || !*ps2)
		return ;
	ft_lstadd_front(ps1, ft_lstnew((*ps2)->n));
	ps = ps2[0]->next;
	free(*ps2);
	ps2[0] = ps;
}

void	pa(t_list **a, t_list **b)
{
	p(a, b);
}

void	pb(t_list **b, t_list **a)
{
	p(b, a);
}
