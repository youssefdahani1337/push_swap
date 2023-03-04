/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yodahani <yodahani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 11:05:14 by yodahani          #+#    #+#             */
/*   Updated: 2023/03/04 10:58:57 by yodahani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;

	if (ac < 2)
		return (5);
	stack_a = ft_splitargs(ac, argv);
	stack_b = 0;
	ft_pushswap(&stack_a, &stack_b);
	return (0);
}
