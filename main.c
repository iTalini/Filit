/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkalashn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/10 14:23:59 by dkalashn          #+#    #+#             */
/*   Updated: 2017/12/10 15:20:00 by akurilen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	main(int argv, char **argc)
{
	t_list *head;
	int fd;

	fd = 0;

	head = ft_m(argv, argc, fd);
	while(head)
 	{
//	 	printf("%c\n", head->num);
	 	printf("%s\n", head->content);
	 	head = head->next;
	}
	return (0);
}
