/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luluzuri <luluzuri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 12:47:08 by luluzuri          #+#    #+#             */
/*   Updated: 2024/10/09 08:04:15 by luluzuri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*tab;

	if (min >= max)
	{
		range = NULL;
		return (0);
	}
	tab = malloc((max - min) * sizeof(int));
	if (tab == NULL)
		return (0);
	i = 0;
	while (i < max - min)
	{
		tab[i] = min + i;
		i++;
	}
	*range = tab;
	return (max - min);
}

/*void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb > 9)
		ft_putnbr((nb / 10));
	ft_putchar((nb % 10) + 48);
}

int	main(int argc, char **argv)
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
	if (!ft_ultimate_range(&tab, min, max))
		return (0);
	i = -1;
	while (++i < max - min)
	{
		ft_putnbr(tab[i]);
		write(1, "\n", 1);
	}
	write(1, "cases crees : ", 14);
	ft_putnbr(max - min);
	free(tab);
	return (0);
}*/
