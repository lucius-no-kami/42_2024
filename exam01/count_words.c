/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_words.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucius <lucius@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 22:21:59 by lucius            #+#    #+#             */
/*   Updated: 2024/09/27 22:30:24 by lucius           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	count_words(char *str)
{
	int	i;
	int count_words;

	i = -1;
	count_words = 0;
	while (str[++i])
	{
		if (str[i] == ' ')
		{	
			if (str[i - 1] >= 33 && str[i - 1] != 127)
				count_words++;
			else if (str[i + 1] == '\0' && str[i] != ' ')
				count_words++;
		}
	}
	return (count_words);
}

int main(int argc, char **argv)
{
	if (argc != 2)
		return (0);
	printf("%d\n", count_words(argv[1]));
	return (0);
}