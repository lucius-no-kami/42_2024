/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luluzuri <luluzuri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 10:34:23 by luluzuri          #+#    #+#             */
/*   Updated: 2024/09/18 12:37:03 by luluzuri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_things(int i, int j)
{
	ft_putchar((i / 10) + 48);
	ft_putchar((i % 10) + 48);
	write(1, " ", 1);
	ft_putchar((j / 10) + 48);
	ft_putchar((j % 10) + 48);
	if (i != 98)
		write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			ft_print_things(i, j);
			j++;
		}
		i++;
	}
}
