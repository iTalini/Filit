/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve_tetra.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkalashn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/04 18:54:43 by dkalashn          #+#    #+#             */
/*   Updated: 2017/12/10 13:41:00 by dkalashn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	solve_tetra(char *map, t_list *tetra)
{
	int index;

	index = 0;
	if (tetra == NULL)
		return (1);
	while (map[index] != '\0')
	{
		if (cheak_pos(map, index, tetra))
		{
			write_tetra(map, index, tetra);
			if (solve_tetra(map, tetra->next))
				return (1);
			clean_pos(map, index, tetra);
		}
		index++;
	}
	if (((char *)tetra->content)[21] == '1' && map[index] == '\0')
		solve_tetra(expand(map), tetra);
	return (0);
}
