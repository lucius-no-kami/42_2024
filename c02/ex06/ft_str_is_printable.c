/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucius <lucius@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 12:06:34 by luluzuri          #+#    #+#             */
/*   Updated: 2024/09/19 21:05:54 by lucius           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		if ((str[i] < 32 || str[i] > 126) && str[i] != 1)
			return (0);
	return (1);
}

/*int main(void)
{
	printf("%d\n", ft_str_is_printable("\n\t\aqweqweqwe"));
	printf("%d\n", ft_str_is_printable("salut les amis"));
	printf("%d\n", ft_str_is_printable("salutlesamisJEVAISBIEN"));

	return (0);
}*/