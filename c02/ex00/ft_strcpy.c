/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucius <lucius@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 20:50:36 by lucius            #+#    #+#             */
/*   Updated: 2024/09/19 21:17:04 by lucius           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = -1;
	while (src[++i])
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

/*int main(void)
{
	char *src = "Salut les amis";
	char dest[15];
	char *srcTest = "Salut les amis";
	char destTest[15];

	ft_strcpy(dest, src);
	strcpy(destTest, srcTest);

	printf("ft_strcpy : %s\n", dest);
	printf("strcpy : %s\n", destTest);
	
	return 0;
}*/