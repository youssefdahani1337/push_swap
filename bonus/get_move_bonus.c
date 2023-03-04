/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_move_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yodahani <yodahani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 11:13:09 by yodahani          #+#    #+#             */
/*   Updated: 2023/03/04 10:38:20 by yodahani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

void	get_move(t_list **a, t_list **b)
{
	char	*inst;

	while (1)
	{
		inst = get_next_line(0);
		if (!inst)
			break ;
		if (ft_strlen(inst) == 3 && inst[2] == '\n')
		{
			if (inst[0] == 's')
				ft_s(a, b, inst[1]);
			else if (inst[0] == 'r')
				ft_r(a, b, inst[1]);
			else if (inst[0] == 'p')
				ft_p(a, b, inst[1]);
			else
				ft_exit(MSG_INST);
		}
		else if (ft_strlen(inst) == 4 && inst[3] == '\n')
			ft_rr(a, b, inst);
		else
			ft_exit("an instruction doesn’t exist");
		free(inst);
	}
}

void	ft_s(t_list **a, t_list **b, char m)
{
	if (m == 'a')
		sa(a);
	else if (m == 'b')
		sb(b);
	else if (m == 's')
		ss(a, b);
	else
		ft_exit(MSG_INST);
}

void	ft_r(t_list **a, t_list **b, char m)
{
	if (m == 'a')
		ra(a);
	else if (m == 'b')
		rb(b);
	else if (m == 'r')
		rr(a, b);
	else
		ft_exit(MSG_INST);
}

void	ft_p(t_list **a, t_list **b, char m)
{
	if (m == 'a')
		pa(a, b);
	else if (m == 'b')
		pb(b, a);
	else
		ft_exit(MSG_INST);
}

void	ft_rr(t_list **a, t_list **b, char *inst)
{
	if (ft_strncmp(inst, "rr", 2) == 0)
	{
		if (inst[2] == 'a')
			rra(a);
		else if (inst[2] == 'b')
			rrb(b);
		else if (inst[2] == 'r')
			rrr(a, b);
		else
			ft_exit(MSG_INST);
	}
	else
		ft_exit(MSG_INST);
}
