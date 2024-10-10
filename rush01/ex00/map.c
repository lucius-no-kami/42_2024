/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luluzuri <luluzuri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 08:15:49 by luluzuri          #+#    #+#             */
/*   Updated: 2024/09/29 08:15:53 by luluzuri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "src.h"

void	fill_map(char **map, int map_size)
{
	int	i;
	int	j;

	i = -1;
	while (++i < map_size)
	{
		j = -1;
		while (++j < map_size)
			map[i][j] = '0';
	}
	return ;
}

char	**create_map(int map_size)
{
	int		i;
	char	**row;

	i = -1;
	row = malloc(map_size * sizeof(char *));
	while (++i < map_size)
		row[i] = malloc(map_size * sizeof(char *));
	fill_map(row, N);
	return (row);
}

void	print_map(char **map)
{
	int	i;
	int	j;

	i = 0;
	while (map[i])
	{
		j = -1;
		while (map[i][++j])
			write(1, &map[i][j], 1);
		write(1, "\n", 1);
		i++;
	}
	return ;
}

void	free_memory(char **map, int size)
{
	int	i;

	i = -1;
	while (++i < size)
	{
		free(map[i]);
	}
	free(map);
	return ;
}
