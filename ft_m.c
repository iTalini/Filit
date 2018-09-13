/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_m.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akurilen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 15:56:30 by akurilen          #+#    #+#             */
/*   Updated: 2017/12/10 15:39:16 by akurilen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static	t_list	*retu(int i)
{
	if (i == 1)
		write(1, "open() error", 13);
	else if (i == 3)
		write(1, "close() error", 14);
	return (NULL);
}

t_list			*ft_m(int argv, char **argc, int fd)
{
	t_list	*head;
	int 	ret;
	char	buf[21];
	char	s[22];

	ret = 0;
	if (argv != 2)
		return (NULL);
	fd = open(argc[1], O_RDONLY);
	if (fd == -1)
		return (retu(1));
	head = ft_else(ret, buf, s, fd);
	if(close(fd) == -1)
		return (retu(3));
	return (head);
}
