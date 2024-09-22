/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luluzuri <luluzuri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 09:02:20 by luluzuri          #+#    #+#             */
/*   Updated: 2024/09/19 12:15:19 by luluzuri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		if (str[i] < 65 || str[i] > 91)
			return (0);
	return (1);
}

/*int main(void)
{
	printf("%d\n", ft_str_is_uppercase("AUWUIQUEQIWUEQIWEUQIEUQEI"));
	printf("%d\n", ft_str_is_uppercase("AUWUIQUE QIWUEQIWE UQIEUQEI"));
	printf("%d\n", ft_str_is_uppercase("AUWUIQUEQwewrewerIWUEQIWEUQIEUQEI"));
	printf("%d\n",
		ft_str_is_uppercase("AUWUIQUEQIWUE234234234234QIWEUQIEUQEI"));
	printf("%d\n", ft_str_is_uppercase(""));

	return (0);
}*/