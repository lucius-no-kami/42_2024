/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luluzuri <luluzuri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 07:49:27 by luluzuri          #+#    #+#             */
/*   Updated: 2024/09/27 10:41:05 by luluzuri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_is_prime_recursive(unsigned int nb, unsigned int i)
{
	if (nb % i == 0 || nb % 2 == 0 || nb <= 1)
		return (0);
	if ((i * i) > nb)
		return (1);
	return (ft_is_prime_recursive(nb, i + 2));
}

int	ft_find_next_prime(int nb)
{
	if (nb == 2 || nb == 3 || nb == 5)
		return (1);
	if (ft_is_prime_recursive(nb, 3))
		return (nb);
	return (ft_find_next_prime(nb + 1));
}

/*int main(int argc, char **argv)
{
	if (argc != 2)
	{
		write(2, "Wrong arguments", 15);
		exit(0);
	}
	printf("%d\n", ft_find_next_prime(atoi(argv[1])));
	return (0);
}*/
