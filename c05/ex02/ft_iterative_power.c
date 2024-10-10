/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luluzuri <luluzuri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 13:48:17 by luluzuri          #+#    #+#             */
/*   Updated: 2024/09/27 08:27:10 by luluzuri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;

	i = nb;
	if (power < 0)
		return (0);
	if (nb == 1 || power == 0)
		return (1);
	while (power > 1)
	{
		nb = nb * i;
		power--;
	}
	return (nb);
}

/*int main(int argc, char **argv)
{
	if (argc != 3)
	{
		write(1, "Wrong arguments", 15);
		exit(0);
	}
	printf("%d\n", ft_iterative_power(atoi(argv[1]), atoi(argv[2])));

	return (0);
}*/