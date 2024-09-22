/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucius <lucius@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 16:26:56 by lucius            #+#    #+#             */
/*   Updated: 2024/09/22 16:50:43 by lucius           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;

	i = 0;
	while (i < size)
	{
		if (tab[i + 1] < tab[i] && i < size - 1)
		{
			tmp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = tmp;
			i = -1;
		}
		i++;
	}
}

/*int main (void)
{
	int tab[] = {9, 8, 4, 3, 7, 15, 7546, 1, 6, 2, 1, 5, 0};

	ft_sort_int_tab(tab, 13);
	
	for (int i = 0; i < 13; i++)
		printf("%d, ", tab[i]);
	
	return (0);
}*/