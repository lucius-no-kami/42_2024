/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luluzuri <luluzuri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 08:46:04 by luluzuri          #+#    #+#             */
/*   Updated: 2024/09/19 08:55:44 by luluzuri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		if (!(str[i] >= 48 && str[i] <= 57))
			return (0);
	return (1);
}

/*int main(void)
{
	printf("%d\n", ft_str_is_numeric("934882a3423492934923499234992394"));
	printf("%d\n", ft_str_is_numeric("934882423492934923499234992394"));
	printf("%d\n", ft_str_is_numeric(""));

	return (0);
}*/