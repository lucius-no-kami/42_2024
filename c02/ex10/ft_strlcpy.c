/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucius <lucius@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 17:13:36 by lucius            #+#    #+#             */
/*   Updated: 2024/09/22 21:06:56 by lucius           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	src_len;
	unsigned int	i;

	i = -1;
	while (src[++i])
		src_len++;
	if (size > 0)
	{
		i = 0;
		while ((i < size - 1) && src[i])
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (src_len);
}

/*int main(void)
{
	char dest[20];
	char str[14] = "Salut les amis";
	char dest1[20];
	char str1[14] = "Salut les amis";

	printf("%d\n", ft_strlcpy(dest, str, 14));
	printf("%s\n", dest);

	printf("%ld\n", strlcpy(dest1, str1, 14));
	printf("%s\n", dest1);

	return (0);
}*/