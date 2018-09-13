/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_else.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akurilen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/10 13:49:10 by akurilen          #+#    #+#             */
/*   Updated: 2017/12/10 13:53:36 by akurilen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static void	ft_l(t_list **list, int num, char *s)
{
	t_list	*new;

	new = ft_lstnew(s, 22);
	new->alf = 'A' + num;
	if (num == 0)
		new->num = '1';
	else
		new->num = '0';
	ft_lstaddend(list, new);
}

static	int		cheak_if(char buf, char *s)
{
	t_list *y;

	y = ft_lstnew(s, 22);
	if (buf != '\n')
	{
		write(1, "error\n", 7);
		return (0);
	}
	if (prov(s) == 0)
	{
		write(1, "error\n", 7);
		return (0);
	}
	return(1);
}

static char		*ft_s(char *s, char *buf)
{
	int i;
	int x;

	i = 0;
	x = 20;
	while (i < 20)
	{
		s[i] = buf[x - 20];
		i++;
		x++;
	}
	return (s);
}

static	char	*ft_s2(char *s, int num)
{
	int i;

	i = 0;
	while(s[i])
	{
		s[i] = ft_abc(s[i], num);
		i++;
	}
	return (s);
}
t_list				*ft_else(int ret, char *buf, char *s, int fd)
{
	t_list	*o;
	int		num;

	num = 0;
	o = NULL;
	while ((ret = read(fd, buf, 21)))
	{
		s = ft_s(s, buf);
		s[19] = '\0';
		if (cheak_if(buf[19], s) == 0)
			return (NULL);
		ft_s2(s, num);
		ft_l(&o, num, s);
		ft_strclr(buf);
		num++;
		if (num > 26)
		{
			write(1, "error\n", 7);
			return (NULL);
		}
	}
	if (buf[0] != '\0')
	{
		write(1, "error\n", 7);
		return (NULL);
	}
	return (o);
}
