/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luluzuri <luluzuri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 13:24:23 by luluzuri          #+#    #+#             */
/*   Updated: 2024/10/09 07:53:35 by luluzuri         ###   ########.fr       */
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

int	get_global_len(int size_strs, char **strs, int sep_len)
{
	int		global_size;
	int		i;

	i = -1;
	global_size = 0;
	while (++i < size_strs)
		global_size += ft_strlen(strs[i]);
	global_size = global_size + (sep_len * (size_strs)) + 1;
	return (global_size);
}

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

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*dest;
	int		i;

	i = -1;
	dest = NULL;
	if (size == 0)
	{
		dest = malloc(sizeof(char));
		dest[0] = '\0';
		return (dest);
	}
	dest = malloc(get_global_len(size, strs, ft_strlen(sep)) * sizeof(char));
	if (dest == NULL)
		return (0);
	dest[0] = '\0';
	while (++i < size)
	{
		ft_strncat(dest, strs[i], ft_strlen(strs[i]));
		if (i != size - 1)
			ft_strncat(dest, sep, ft_strlen(sep));
	}
	dest[ft_strlen(dest)] = '\0';
	return (dest);
}

/*int	main(void)
{
	char	*src[] = {"test", "test", "test"};
	char	*dest;
	int		i;

	i = 0;
	dest = ft_strjoin(0, src, " || ");
	while (dest[i])
	{
		write(1, &dest[i], 1);
		i++;
	}
	write(1, "\n", 1);
	free(dest);
}*/
