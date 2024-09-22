/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucius <lucius@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 20:57:54 by lucius            #+#    #+#             */
/*   Updated: 2024/09/19 21:17:23 by lucius           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*int main(void)
{
	const int taille = 14;
	char *src = "Salut les amis!!!!!";
	char dest[taille];
	char *srcTest = "Salut les amis!!!!!";
	char destTest[taille];

	ft_strncpy(dest, src, taille);
	strncpy(destTest, srcTest, taille);

	printf("ft_strncpy : %s\n", dest);
	printf("strncpy : %s\n", destTest);
}*/