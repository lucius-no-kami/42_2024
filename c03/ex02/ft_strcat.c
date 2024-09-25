/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luluzuri <luluzuri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 21:50:08 by lucius            #+#    #+#             */
/*   Updated: 2024/09/24 08:08:07 by luluzuri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[j])
		j++;
	while (src[i])
	{
		dest[j + i] = src[i];
		i++;
	}
	dest[j + i] = '\0';
	return (dest);
}

/*int main(void)
{
	char dest[20] = "Salut les ";
	char src[] = "amis!";
	char dest1[20] = "Salut les ";
	char src1[] = "amis!";

	printf("%s\n", strcat(dest, src));
	printf("%s\n", ft_strcat(dest1, src1));
	
	return (0);
}*/