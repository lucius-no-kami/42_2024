/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luluzuri <luluzuri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 21:50:08 by lucius            #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2024/09/21 18:11:25 by lucius           ###   ########.fr       */
=======
/*   Updated: 2024/09/22 11:38:53 by luluzuri         ###   ########.fr       */
>>>>>>> bd4a518cbb52e32ac9fa38f7ea51b62c8d5bbd18
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