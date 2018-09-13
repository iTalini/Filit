/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   creat_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkalashn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/04 19:15:59 by dkalashn          #+#    #+#             */
/*   Updated: 2017/12/04 19:47:33 by dkalashn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char *creat_map(int size)
{
	char	*map;
	int		i;

	i = -1;
	if (size < 4)
		size = 4;
	map = (char *)malloc(sizeof(char) *((size + 1) * size));
	if (!map)
		return (NULL);
	while (++i < ((size + 1) * size))
		map[i] = '.';
	i = size;
	while (i < ((size + 1) * size))
	{
		map[i] =  '\n';
		i = i + (size + 1);
	}
	map[(size + 1) * size - 1] = '\0';
	return (map);
}
