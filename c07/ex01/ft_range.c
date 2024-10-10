/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luluzuri <luluzuri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 12:23:55 by luluzuri          #+#    #+#             */
/*   Updated: 2024/10/09 07:58:08 by luluzuri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;

	if (min >= max)
		return (0);
	tab = malloc((max - min) * sizeof(int));
	if (tab == NULL)
		return (0);
	i = 0;
	while (i < max - min)
	{
		tab[i] = min + i;
		i++;
	}
	return (tab);
}

/*int	main(int argc, char **argv)
{
	int	*tab;
	int	max;
	int	min;
	int	i;

	if (argc != 3)
	{
		write(1, "Wrong arguments", 15);
		exit(0);
	}
	max = atoi(argv[2]);
	min = atoi(argv[1]);
	tab = ft_range(min, max);
	i = 0;
	while (i < max - min)
	{
		printf("%d\n", tab[i]);
		i++;
	}
	printf("cases crees : %d", (max - min));
	free(tab);
	return (0);
}*/
