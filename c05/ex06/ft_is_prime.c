/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luluzuri <luluzuri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 08:06:56 by luluzuri          #+#    #+#             */
/*   Updated: 2024/09/29 08:25:23 by luluzuri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_is_prime_recursive(unsigned int nb, unsigned int i)
{
	if (nb % i == 0 || nb % 2 == 0 || nb <= 1)
		return (0);
	if ((i * i) > nb)
		return (1);
	return (ft_is_prime_recursive(nb, i + 1));
}

int	ft_is_prime(int nb)
{
	if (nb == 2 || nb == 3 || nb == 5)
		return (1);
	return (ft_is_prime_recursive(nb, 3));
}

/*int main(int argc, char **argv)
{
	if (argc != 2)
	{
		write(2, "Wrong arguments", 15);
		return (0);
	}
	printf("%d\n", ft_is_prime(atoi(argv[1])));

	return (0);
}*/
