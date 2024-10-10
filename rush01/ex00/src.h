/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   src.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luluzuri <luluzuri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 07:46:02 by luluzuri          #+#    #+#             */
/*   Updated: 2024/09/29 08:14:51 by luluzuri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SRC_H
# define SRC_H
# define N 4

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

char	**create_map(int map_size);
void	print_map(char **map);
void	free_memory(char **map, int size);

#endif