/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luluzuri <luluzuri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 21:39:42 by lucius            #+#    #+#             */
/*   Updated: 2024/09/24 08:08:11 by luluzuri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
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

	printf("%d\n", strncmp(str, str1, 5));
	printf("%d\n", ft_strncmp(str, str1, 5));
	printf("%d\n", strncmp(str, str2, 14));
	printf("%d\n", ft_strncmp(str, str2, 14));

	return (0);
}*/
