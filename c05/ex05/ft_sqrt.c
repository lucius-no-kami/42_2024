/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luluzuri <luluzuri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 15:18:03 by luluzuri          #+#    #+#             */
/*   Updated: 2024/09/29 08:45:47 by luluzuri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_sqrt_recursive(unsigned int nb, unsigned int i)
{
	if ((i * i) > nb)
		return (0);
	if ((i * i) == nb)
		return (i);
	return (ft_sqrt_recursive(nb, i + 1));
}

int	ft_sqrt(int nb)
{
	if (nb < 0)
		return (0);
	return (ft_sqrt_recursive(nb, 1));
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
		ft_putnbr(nb / 10);
	ft_putchar((nb % 10) + 48);
}

int	main(int argc, char **argv)
{
	int	i;

	if (argc != 2)
	{
		write(1, "Wrong arguments", 15);
		return (0);
	}
	i = 0;
	while (i <= atoi(argv[1]))
	{
		putnbr(i);
		write(1, " : ", 3);
		putnbr(ft_sqrt(i));
		write(1, "\n", 1);
		i++;
	}

	return (0);
}*/
