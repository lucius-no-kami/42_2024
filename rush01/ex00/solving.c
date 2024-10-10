/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solving.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luluzuri <luluzuri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 09:02:17 by luluzuri          #+#    #+#             */
/*   Updated: 2024/09/29 08:14:24 by luluzuri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "src.h"

int	check_unique_col(char **map, int i, int j)
{
	int	k;

	k = -1;
	while (k < N)
		if (map[++k][j] == map[i][j])
			return (0);
	return (1);
}

int	check_valide_col(char **map, char arg, int j)
{
	int	i;
	int	count_bat;

	i = 0;
	count_bat = 1;
	while (i < N)
	{
		if (map[i][j] < map[i][j + 1])
			count_bat++;
		i++;
	}
	if (count_bat != arg)
		return (0);
	return (1);
}

int	check_unique_row(char **map, int i, int j)
{
	int	k;

	k = -1;
	while (++k < N)
		if (map[i][k] == map[i][j])
			return (0);
	return (1);
}

int	check_valide_row(char **map, char arg, int i)
{
	int	j;
	int	count_bat;

	j = 0;
	count_bat = 1;
	while (j < N)
	{
		if (map[i][j] < map[i][j + 1])
			count_bat++;
		j++;
	}
	if (count_bat != arg)
		return (0);
	return (1);
}
