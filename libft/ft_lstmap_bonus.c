/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yodahani <yodahani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 20:06:24 by yodahani          #+#    #+#             */
/*   Updated: 2023/02/03 18:41:47 by yodahani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, int (*f)(int), void (*del)(int))
{
	t_list	*head;
	t_list	*new;

	if (!lst || !f || !del)
		return (NULL);
	head = ft_lstnew((f)(lst->n));
	if (!head)
		return (NULL);
	lst = lst->next;
	while (lst)
	{
		new = ft_lstnew((f)(lst->n));
		if (!new)
		{
			ft_lstclear(&head, del);
			return (NULL);
		}
		ft_lstadd_back(&head, new);
		lst = lst->next;
	}
	return (head);
}
