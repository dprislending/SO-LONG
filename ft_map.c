/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roumbare <roumbare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 19:18:58 by roumbare          #+#    #+#             */
/*   Updated: 2022/06/24 20:04:35 by roumbare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"so_long.h"

int	ft_nb_lines(int fd)
{
	int	i;
	int	r;
	int	readed;
	char *buffer;

	i = 0;
	r = 0;
	readed = 1;
	while (readed)
	{
		readed = read(fd, buffer, 1);
		buffer[readed] = 0;
		if (ft_check(buffer))
			r++;
	}
	return (r);
}

void	ft_print_map(char **map)
{
	int	i;

	i = 0;
	while (i < map_len)
	{
		map = printf("%s", map[i]);
		i++;
	}
}

char	**ft_get_map(int fd)
{
	char	**tab;
	int		j;

	j = 0;
	tab = malloc(sizeof(char *) * ft_nb_lines(fd));
	if (!tab)
		return(free(tab), NULL);
	while(j < ft_nb_lines(fd))
	{
		tab[j] = gnl(fd);
		j++;
	}
	tab[j] = '\0';
	return (tab);
}
