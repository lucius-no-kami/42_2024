/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luluzuri <luluzuri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 12:59:11 by luluzuri          #+#    #+#             */
/*   Updated: 2024/09/24 08:08:02 by luluzuri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[j])
		j++;
	while (src[i] && i < nb)
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

	printf("%s\n", strncat(dest, src, 5));
	printf("%s\n", ft_strncat(dest1, src1, 5));
	
	return (0);
}*/