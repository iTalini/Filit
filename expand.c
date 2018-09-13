/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkalashn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/04 21:47:47 by dkalashn          #+#    #+#             */
/*   Updated: 2017/12/04 21:56:31 by dkalashn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char *expand(char *map)
{
	int width_old;

	width_old = width_map(map);
	free(map);
	return (creat_map(width_old + 1));
}
