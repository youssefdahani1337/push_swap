/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yodahani <yodahani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 11:05:31 by yodahani          #+#    #+#             */
/*   Updated: 2023/03/04 10:10:16 by yodahani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include "../instructions/instructions.h"

typedef struct s_thelper
{
	int	*tab;
	int	size;
	int	chunk;
	int	max;
	int	move;
	int	i;
	int	iter;
	int	k;
}	t_thelper;

int			ft_check_in(int n, t_list *lst);
int			my_atoi(const char *str, char **sp, t_list **lst);
t_list		*ft_splitargs(int ac, char **argv);
void		ft_sort_two(t_list **a);
void		ft_sort_three(t_list **a);
void		ft_sort_five(t_list **a, t_list **b);
void		ft_pushswap(t_list **a, t_list **b);
void		ft_checkexist(t_list **lst, int n, char **sp);
int			ft_error(char *msg, char **sp, t_list **lst);
void		ft_freesp(char **sp);
void		ft_n(int n);
int			ft_min(t_list *a, int *min);
int			ft_check_sort(t_list *lst);
void		ft_merge(int *tab, int size);
void		ft_swap(int *a, int *b);
void		ft_sort(t_list **a, t_list **b);
int			*ft_nsort(t_list *lst, int size);
t_thelper	*ft_search(t_list *a, t_thelper *t);
void		ft_push_tob(t_list **a, t_list **b, t_thelper t);
void		ft_moveb(t_list **a, t_list **b, t_thelper *t,
				void (*f)(t_list **));
void		ft_incr(t_thelper *t);
void		ft_move(t_list **a, t_list **b, t_thelper *t);
int			ft_check_sorttab(t_list *a, t_thelper t);
int			ft_checkpos(t_list *lst, t_thelper *t);
int			ft_checktop(t_list **a, t_thelper t);
void		ft_push_toa(t_list **a, t_list **b, t_thelper t);
void		ft_subsort(t_list **a, t_list **b, t_thelper t);
void		ft_getsize(t_list *a, int *size);
void		ft_totop(t_list **a, t_list **b, t_thelper *t, int *c);
void		ft_move_me(t_list **stack1, t_list **stack2,
				void (*f)(t_list **lst), int *size);
void		ft_whilef(t_list **a, int min, void (*f)(t_list **a));
#endif