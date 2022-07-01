/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roumbare <roumbare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 14:15:23 by roumbare          #+#    #+#             */
/*   Updated: 2022/06/24 19:58:25 by roumbare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"so_long.h"

// int	main(int argc, char **argv)
// {
// 	char	*str;
// 	int		fd;

// 	if (argc != 2)
// 		return (1);
// 	fd = open(argv[1], O_RDONLY);
// 	str = gnl(fd);
// 	while (str)
// 	{
// 		// printf("%s", str);
// 		ft_get_map(fd);
// 		free(str);
// 		str = gnl(fd);
// 	}
// 	// printf(0);
// 	free(str);
// 	return (0);
// }

int	main()
{
    int		fd;
	t_data *data;

	fd = open("map.txt", O_RDONLY);
	t_data.map = ft_get_map(fd);
	ft_print_map(map);
    close(fd);
}