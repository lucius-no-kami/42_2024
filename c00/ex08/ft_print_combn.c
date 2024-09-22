/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucius <lucius@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 15:42:45 by lucius            #+#    #+#             */
/*   Updated: 2024/09/22 16:16:51 by lucius           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print(int *range, int n)
{
	int	display;
	int	i;

	display = 1;
	i = 0;
	while (++i < n)
		if (range[i - 1] >= range[i])
			display = 0;
	if (!display)
		return ;
	i = -1;
	while (++i < n)
		ft_putchar(range[i] + 48);
	if (range[0] < (10 - n))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_combn(int n)
{
	int	i;
	int	range[10];

	i = -1;
	if (n < 0 || n > 10)
		return ;
	while (++i < n)
		range[i] = i;
	while (range[0] <= (10 - n) && n >= 1)
	{
		print(range, n);
		if (n == 10)
			break ;
		range[n - 1]++;
		i = n;
		while (i && n > 1)
		{
			i--;
			if (range[i] > 9)
			{
				range[i - 1]++;
				range[i] = 0;
			}
		}
	}
}

/*int main(void)
{
	ft_print_combn(5);
	return (0);
}*/