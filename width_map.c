/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   width_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkalashn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/02 19:07:48 by dkalashn          #+#    #+#             */
/*   Updated: 2017/12/02 19:10:03 by dkalashn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	width_map(char *map)
{
	int i;

	i = 0;
	while (map[i] != '\n')
		i++;
	return i;
}