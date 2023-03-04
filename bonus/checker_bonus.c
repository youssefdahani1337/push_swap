/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yodahani <yodahani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 15:53:05 by yodahani          #+#    #+#             */
/*   Updated: 2023/03/04 11:05:36 by yodahani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

int	main(int ac, char **av)
{
	t_list	*a;
	t_list	*b;

	if (ac < 2)
		return (0);
	a = ft_splitargs(ac, av);
	b = 0;
	get_move(&a, &b);
	if (b || !ft_sorted(a))
		ft_printf("\033[0;31mKO \033[0m\n");
	else
		ft_printf("\033[0;32mOK \033[0m\n");
	return (0);
}
