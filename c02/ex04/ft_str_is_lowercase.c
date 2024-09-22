/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luluzuri <luluzuri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 08:52:26 by luluzuri          #+#    #+#             */
/*   Updated: 2024/09/19 09:10:53 by luluzuri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		if (str[i] < 97 || str[i] > 122)
			return (0);
	return (1);
}

/*int main(void)
{
	printf("%d\n", ft_str_is_lowercase("qweqhweqwheqwheqhe"));
	printf("%d\n", ft_str_is_lowercase("sdadasd934883499234992394"));
	printf("%d\n", ft_str_is_lowercase("eiureweUUUUUUQWR"));
	printf("%d\n", ft_str_is_lowercase("Salut les amis"));
	printf("%d\n", ft_str_is_lowercase(""));

	return (0);
}*/