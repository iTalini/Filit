/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_tetra.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkalashn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/07 22:04:52 by dkalashn          #+#    #+#             */
/*   Updated: 2017/12/09 22:20:26 by dkalashn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int	cheak_link(char *str, int i)
{
	int	len;
	int res;

	res = 0;
	len = ft_strlen(str);
	if ((i + 1) < len && str[i + 1] == str[20])
		res++;
	if ((i + 5) < len && str[i + 5] == str[20])
		res++;
	return (res);
}

int	valid_tetra(t_list *head)
{
	int		i;
	int		link;
	int		n_tetra;

	n_tetra = 0;
	while (head)
	{
		i = -1;
		link = 1;
		while(((char *)head->content)[++i])
		{
			if (((char *)head->content)[i] == ((char *)head->content)[20])
			{
				n_tetra++;
				link = link + cheak_link(((char *)head->content), i);
			}
		}
		if (n_tetra != 4 || link != 4)
			return (0);
		head = head->next;
	}
	return (1);
}
