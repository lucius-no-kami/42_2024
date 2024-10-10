/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luluzuri <luluzuri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 12:04:43 by luluzuri          #+#    #+#             */
/*   Updated: 2024/10/05 09:07:26 by luluzuri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;

	dest = (char *)malloc(ft_strlen(src) + 1 * sizeof(char));
	if (dest == NULL)
		return (0);
	i = -1;
	while (src[++i])
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

/*int main(int argc, char **argv)
{
	char *dest;
	char *dest2;
	if (argc != 2)
	{
		write(1, "Wrong arguments", 15);
		exit(0);
	}
	dest = ft_strdup(argv[1]);
	dest2 =  strdup(argv[1]);
	printf("%s\n", dest2);
	printf("%s\n", dest);
	free(dest);
	free(dest2);
	return (0);
}*/
