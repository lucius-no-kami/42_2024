/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luluzuri <luluzuri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 21:20:05 by lucius            #+#    #+#             */
/*   Updated: 2024/09/20 09:19:10 by luluzuri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

/*int main(void)
{
	char *str = "salut les amis";
	char *str1 = "salut les amis ";
	char *str2 = "salut lEs amis";
	

	printf("%d\n", strcmp(str, str1));
	printf("%d\n", ft_strcmp(str, str1));
	printf("%d\n", strcmp(str, str2));
	printf("%d\n", ft_strcmp(str, str2));

	return (0);
}*/