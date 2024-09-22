/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luluzuri <luluzuri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 14:16:45 by luluzuri          #+#    #+#             */
/*   Updated: 2024/09/19 15:21:38 by luluzuri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		if (str[i] >= 65 && str[i] <= 90)
			str[i] += 32;
	return (str);
}

/*int main(void)
{
	char tab[] = "qweqweqwe";
	char tab2[] = "salut les amis";
	char tab3[] = "salutlesamisJEVAISBIEN";

	printf("%s\n", ft_strlowcase(tab));
	printf("%s\n", ft_strlowcase(tab2));
	printf("%s\n", ft_strlowcase(tab3));

	return (0);
}*/