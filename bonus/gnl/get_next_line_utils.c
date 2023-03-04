/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yodahani <yodahani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 10:54:31 by yodahani          #+#    #+#             */
/*   Updated: 2023/03/01 10:16:09 by yodahani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlengnl(char *s)
{
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i])
		i++;
	return (i);
}

int	ft_nl(char *s)
{
	int	i;

	if (!s)
		return (-1);
	i = 0;
	while (s[i])
	{
		if (s[i] == '\n')
			return (i);
		i ++;
	}
	return (-1);
}

void	ft_fill(char *dst, char *src, int start, size_t len)
{
	size_t	i;

	i = 0;
	if (!src)
		return ;
	while (i < len)
	{
		dst[start++] = src[i++];
	}
	dst[start++] = '\0';
}

char	*ft_strjoingnl(char **str, char *s)
{
	char	*st;
	size_t	lenold;
	size_t	lennew;

	lenold = ft_strlengnl(*str);
	lennew = ft_strlengnl(s);
	st = (char *) malloc(sizeof(char) * (lenold + lennew + 1));
	if (!st)
		return (ft_free(str, s));
	ft_fill(st, *str, 0, lenold);
	ft_fill(st, s, lenold, lennew);
	free(*str);
	return (st);
}

char	*ft_substringgnl(char **str)
{
	char	*snl;
	char	*s;
	int		i;
	int		j;

	if (!*str)
		return (0);
	i = ft_nl(str[0]) + 1;
	j = ft_strlengnl(str[0]) - i;
	if (i == -1)
		return (ft_end(str, 0));
	snl = (char *) malloc(sizeof(char) + (sizeof(char) * i));
	if (!snl)
		return (ft_free(str, 0));
	s = (char *) malloc(sizeof(char) + (sizeof(char) * j));
	if (!s)
		return (ft_free(str, snl));
	ft_fill(snl, *str, 0, i);
	ft_fill(s, (*str) + i, 0, j);
	free(*str);
	*str = s;
	return (snl);
}
