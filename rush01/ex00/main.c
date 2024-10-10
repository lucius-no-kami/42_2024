/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luluzuri <luluzuri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 08:15:21 by luluzuri          #+#    #+#             */
/*   Updated: 2024/09/29 08:15:32 by luluzuri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "src.h"

int	check_format_error(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= '1' && str[i] <= '4') && str[i] != ' ')
			return (0);
		i++;
	}
	if (i != 31)
		return (0);
	return (1);
}

int	main(int argc, char **argv)
{
	char	**map;
	char	*parsed_str;

	if (argc != 2)
	{
		write(1, "Error", 5);
		return (0);
	}
	if (!check_format_error(argv[1]))
	{
		write(2, "Error", 5);
		return (0);
	}
	map = create_map(N);
	solve_rush(map, argv[1], 0, 0, 1);
	free_memory(map, N);
	return (0);
}
