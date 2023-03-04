/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yodahani <yodahani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 12:19:24 by yodahani          #+#    #+#             */
/*   Updated: 2023/03/04 10:13:19 by yodahani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

void	ft_n(int n)
{
	n = 0;
}

void	ft_freesp(char **sp)
{
	int	i;

	i = 0;
	if (!sp)
		return ;
	while (sp[i])
		free(sp[i ++]);
	free(sp);
}

int	ft_error(char *msg, char **sp, t_list **lst)
{
	ft_freesp(sp);
	ft_lstclear(lst, ft_n);
	ft_putstr_fd("Error\n", 2);
	ft_putstr_fd(msg, 2);
	ft_putstr_fd("\n", 2);
	exit(0);
	return (0);
}

void	ft_exit(char *msg)
{
	ft_putstr_fd("Error\n", 2);
	ft_putstr_fd(msg, 2);
	ft_putstr_fd("\n", 2);
	exit(0);
}
