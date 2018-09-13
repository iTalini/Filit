/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_map.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkalashn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/10 12:49:57 by dkalashn          #+#    #+#             */
/*   Updated: 2017/12/10 13:06:20 by dkalashn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	min_map(t_list *head)
{
	int num;
	int	i;

	i = 4;
	num = ft_lstcount(head) * 4;
	while (i * i <= num && i < 27)
		i++;
	if (i *i == num)
		return (i);
	else if ((--i) > 4)
		return (i);
	return (4);
}
