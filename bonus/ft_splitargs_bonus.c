/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_splitargs_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yodahani <yodahani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 11:21:54 by yodahani          #+#    #+#             */
/*   Updated: 2023/03/04 11:05:52 by yodahani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

int	my_atoi(const char *str, char **sp, t_list **lst)
{
	int		i;
	int		sign;
	long	result;
	int		check;

	check = 1;
	result = 0;
	sign = 1;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if ((str[i] == '-' || str[i] == '+') && ft_strlen(str) > 1)
		sign = -1 * (str[i ++] - 44);
	while (ft_isdigit(str[i]))
	{
		result = (result * 10) + (str[i ++] - 48);
		if ((result > 2147483647 && sign == 1)
			|| (result > 2147483648 && sign == -1))
			return (ft_error("Overflow", sp, lst));
		check = 1;
	}
	if (str[i] != '\0' || check == 0)
		return (ft_error("Invalid Character", sp, lst));
	return (result * sign);
}

void	ft_checkexist(t_list **lst, int n, char **sp)
{
	t_list	*l;

	l = *lst;
	while (l)
	{
		if (l->n == n)
			ft_error("Duplicated number", sp, lst);
		l = l->next;
	}
	ft_lstadd_back(lst, ft_lstnew(n));
}

t_list	*ft_splitargs(int ac, char **argv)
{
	t_list	*lst;
	int		i;
	int		j;
	char	**sp;
	int		n;

	i = 1;
	lst = NULL;
	while (i < ac)
	{
		j = 0;
		sp = ft_split(argv[i], ' ');
		if (argv[i][0] == '\0' || !sp || !sp[0])
			return (ft_error("Empty String", NULL, &lst), lst);
		while (sp[j])
		{
			n = my_atoi(sp[j ++], sp, &lst);
			ft_checkexist(&lst, n, sp);
		}
		ft_freesp(sp);
		i++;
	}
	return (lst);
}

int	ft_sorted(t_list *a)
{
	while (a->next)
	{
		if (a->n > a->next->n)
			return (0);
		a = a->next;
	}
	return (1);
}
