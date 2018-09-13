/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cheak_pos.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkalashn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/07 21:46:02 by dkalashn          #+#    #+#             */
/*   Updated: 2017/12/09 22:13:09 by dkalashn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int	add_f(char *str, int i, int pad, int index, char *map)
{
	static int j = 1;
	int			width;

	width = width_map(map);
	if (str[i] == str[20] && str[i - 1] != str[20])
	{
		if ((index + i - pad + (width - 4) * j) >= ft_strlen(map) ||
		map[index + i - pad +(width - 4) * j] != '.')
			return (0);   
		j++;
	}
	else if (str[i] == str[20])
	{
		if ((index +i - pad + (width - 4) * (j - 1) >= ft_strlen(map) ||
		map[index + i - pad +(width - 4) * (j - 1)] != '.'))
			return (0);
 	}
	return (1);
}

int	cheak_pos(char *map, int index, t_list *tetra)
{
	int i;
	int width;
	int pad;
	char *str;

	str = (char *)tetra->content;
	i = 0;
	while (str[i] != str[20])
		i++;
	pad = i;
	if (map[index] != '.')
		return (0);
	while (str[++i] != '\0')
	{
		if (add_f(str, i, pad, index, map) == 0)
			return (0);
	}
	return (1);
}
