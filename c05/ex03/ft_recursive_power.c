/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luluzuri <luluzuri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 14:03:51 by luluzuri          #+#    #+#             */
/*   Updated: 2024/09/27 08:27:15 by luluzuri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (nb == 1 || power == 0)
		return (1);
	if (power == 1)
		return (nb);
	return (nb * ft_recursive_power(nb, power - 1));
}

/*int main(int argc, char **argv)
{
	if (argc != 3)
	{
		write(2, "Wrong arguments", 15);
		exit(0);
	}
	printf("%d\n", ft_recursive_power(atoi(argv[1]), atoi(argv[2])));

	return (0);
}*/