/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucius <lucius@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 16:15:28 by lucius            #+#    #+#             */
/*   Updated: 2024/09/22 16:25:28 by lucius           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	j = size - 1;
	while (i < (size / 2))
	{
		tmp = tab[i];
		tab[i] = tab[j];
		tab[j] = tmp;
		i++;
		j--;
	}
}

/*int main(void)
{
	int tab[10];
	int i = -1;
	
	while (++i < 10)
		tab[i] = i;
	
	printf("Normal\n");
	for (i = 0; i < 10; i++)
		printf("%d\n", tab[i]);
	
	ft_rev_int_tab(tab, 10);

	printf("\nReversed\n");
	for (i = 0; i < 10; i++)
		printf("%d\n", tab[i]);

	return (0);
}*/