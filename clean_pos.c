#include "fillit.h"

void	clean_pos(char *map, int index, t_list *tetra)
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
	map[index] = '.';
	while (str[++i] != '\0')
	{
		if (str[i] == str[20] && str[i - 1] != str[20])
			map[index + i - pad + (width - 4) * (++j)] = '.';
		else if (str[i] == str[20])
			map[index + i - pad + (width - 4)*(j - 1)] = '.';
	}
}
