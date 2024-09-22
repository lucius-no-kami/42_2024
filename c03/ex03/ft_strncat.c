/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
<<<<<<< HEAD
/*   By: lucius <lucius@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 18:34:47 by lucius            #+#    #+#             */
/*   Updated: 2024/09/21 18:36:53 by lucius           ###   ########.fr       */
=======
/*   By: luluzuri <luluzuri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 12:59:11 by luluzuri          #+#    #+#             */
/*   Updated: 2024/09/22 11:38:20 by luluzuri         ###   ########.fr       */
>>>>>>> bd4a518cbb52e32ac9fa38f7ea51b62c8d5bbd18
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
<<<<<<< HEAD

char	*ft_strncat(char *dest, char *src)
{

	return (dest);
}
=======
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
	while (dest[j + i] && i < nb)
	{
		dest[j + i] = '\0';
		i++;
	}
	return (dest);
}

/*int main(void)
{
	char dest[20] = "Salut les ";
	char src[] = "amis!";
	char dest1[20] = "Salut les ";
	char src1[] = "amis!";

	printf("%s\n", strncat(dest, src, 2));
	printf("%s\n", ft_strncat(dest1, src1, 2));
	
	return (0);
}*/
>>>>>>> bd4a518cbb52e32ac9fa38f7ea51b62c8d5bbd18
