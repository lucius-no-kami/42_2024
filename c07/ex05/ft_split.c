/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luluzuri <luluzuri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 11:54:46 by luluzuri          #+#    #+#             */
/*   Updated: 2024/10/05 13:55:09 by luluzuri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	is_in_charset(char *charset, char c)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	count_words(char *str, char *charset)
{
	int	i;
	int	word_count;

	i = 0;
	word_count = 0;
	while (str[i])
	{
		if (!is_in_charset(charset, str[i]) \
		&& (is_in_charset(charset, str[i + 1]) || str[i + 1] == '\0'))
			word_count++;
		i++;
	}
	return (word_count + 1);
}

char	*cs_cpy(char *str, int start, int finish)
{
	char	*dest;
	int		i;

	dest = (char *)malloc(((finish - start) + 2) * sizeof(char));
	if (dest == NULL)
		return (0);
	i = 0;
	while (i < (finish - start) + 1)
	{
		dest[i] = str[start + i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	**ft_split(char *str, char *charset)
{
	char	**result;
	int		i;
	int		k;
	int		result_index;

	i = -1;
	result_index = 0;
	k = 0;
	result = (char **)malloc((count_words(str, charset) + 1) * sizeof(char *));
	if (result == NULL)
		return (0);
	while (str[++i])
	{
		if (!is_in_charset(charset, str[i]) \
		&& (is_in_charset(charset, str[i + 1]) || str[i + 1] == '\0'))
		{
			result[result_index] = cs_cpy(str, k, i);
			result_index++;
		}
		else if (is_in_charset(charset, str[i]))
			k = i + 1;
	}
	return (result);
}

/*int	main(int argc, char **argv)
{
	char	**dest;
	int		i;

	i = 0;
	if (argc != 3)
	{
		write(2, "Wrong arguments", 15);
		return (0);
	}
	printf("%i\n", count_words(argv[1], argv[2]));
	dest = ft_split(argv[1], argv[2]);
	while (i < (count_words(argv[1], argv[2])) - 1)
	{
		printf("%s\n", dest[i]);
		i++;
	}
	i = -1;
	while (++i <= count_words(argv[1], argv[2]))
		free(dest[i]);
	free(dest);
	return (0);
}*/
