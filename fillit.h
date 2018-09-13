/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akurilen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/27 17:05:33 by akurilen          #+#    #+#             */
/*   Updated: 2017/12/10 15:16:37 by akurilen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include <sys/types.h>
# include <sys/stat.h>
# include <string.h>
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdio.h>
# include "libft/libft.h"

int		prov(char *c);
char	ft_abc(char argc, int num);
t_list	*ft_else(int ret, char *buf, char *s, int fd);
t_list	*ft_m(int argv, char **argc, int fd);
int		width_map(char *map);
void	write_tetra(char *map, int index, t_list *tetra);
void	clean_pos(char *map, int index, t_list *tetra);
int		cheak_pos(char *map, int index, t_list *tetra);
char	*creat_map(int size);
int		solve_tetra(char *map, t_list *tetra);
char	*expand(char *map);
int		valid_tetra(t_list * head);
int		min_map(t_list *head);

#endif
