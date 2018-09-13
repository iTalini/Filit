/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_tetra.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkalashn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/02 18:06:08 by dkalashn          #+#    #+#             */
/*   Updated: 2017/12/09 21:36:11 by dkalashn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	write_tetra(char *map, int index, t_list *tetra)
{
	int i;
	int width;
	int pad;
	int j;
	char *str;

	str = (char *)tetra->content;
	i = 0;
	j = 0;
	width = width_map(map);
	while (str[i] != str[20])
		i++;
	pad = i;
	map[index] = str[pad];
	while (str[++i] != '\0')
	{
		if (str[i] == str[20] && str[i - 1] != str[20])
			map[index + i - pad + (width - 4) * (++j)] = str[i];
		else if (str[i] == str[20])
				map[index + i - pad + (width - 4)*(j - 1)] = str[i];
	}
}
