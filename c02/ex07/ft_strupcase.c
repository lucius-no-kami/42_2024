/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luluzuri <luluzuri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 13:19:46 by luluzuri          #+#    #+#             */
/*   Updated: 2024/09/19 14:12:50 by luluzuri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
	return (str);
}

/*int main(void)
{
	char tab[] = "qweqweqwe";
	char tab2[] = "salut les amis";
	char tab3[] = "salutlesamisJEVAISBIEN";
	
	printf("%s\n", ft_strupcase(tab));
	printf("%s\n", ft_strupcase(tab2));
	printf("%s\n", ft_strupcase(tab3));

	return (0);
}*/