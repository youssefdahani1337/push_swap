/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yodahani <yodahani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 09:06:37 by yodahani          #+#    #+#             */
/*   Updated: 2023/03/04 10:20:36 by yodahani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_BONUS_H
# define CHECKER_BONUS_H

# include "../libft/libft.h"
# include "./gnl/get_next_line.h"
# include "./instructions_bonus/instructions_bonus.h"
# define MSG_INST "Invalid instruction"

void	ft_s(t_list **a, t_list **b, char m);
void	ft_r(t_list **a, t_list **b, char m);
void	ft_p(t_list **a, t_list **b, char m);
void	ft_rr(t_list **a, t_list **b, char *inst);
t_list	*ft_splitargs(int ac, char **argv);
void	ft_checkexist(t_list **lst, int n, char **sp);
void	get_move(t_list **a, t_list **b);
void	ft_exit(char *msg);
void	ft_n(int n);
void	ft_freesp(char **sp);
int		ft_error(char *msg, char **sp, t_list **lst);
int		my_atoi(const char *str, char **sp, t_list **lst);
int		ft_sorted(t_list *a);
#endif