/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yodahani <yodahani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 19:39:25 by yodahani          #+#    #+#             */
/*   Updated: 2023/02/03 17:31:34 by yodahani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(int n)
{
	t_list	*l;

	l = (t_list *) malloc(sizeof(t_list));
	if (!l)
		return (0);
	l->n = n;
	l->next = NULL;
	return (l);
}
