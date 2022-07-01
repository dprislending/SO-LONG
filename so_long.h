/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roumbare <roumbare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 21:55:59 by roumbare          #+#    #+#             */
/*   Updated: 2022/06/24 20:01:44 by roumbare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include       <unistd.h>
# include       <stddef.h>
# include       <stdlib.h>
# include       <fcntl.h>
# include       <stdio.h>


//_______________//  GNL FUNCTIONS  //___________________//
#ifndef BUFFER_SIZE
# define BUFFER_SIZE 10000
#endif

typedef struct s_data
{
	char 	**map;
	int		width;
	int		height;
}			t_data;

int		ft_check(char *s);
int		ft_find_target(const char *stock);
size_t	ft_strlen(const char *s);
char	*gnl(int fd);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char *s1, char *s2);
char	**ft_get_map(int fd);
void	ft_print_map(char **map)

#endif