/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarcas- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 13:59:26 by rmarcas-          #+#    #+#             */
/*   Updated: 2024/09/22 14:06:54 by rmarcas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_things(int i, int j, int x, int y)
{
	if ((i == 1 && j == 1) || (i == y && j == x && x > 1 && y > 1))
	{
		ft_putchar('o');
	}
	else if ((j == x && i == 1) || (j == 1 && i == y))
	{
		ft_putchar('o');
	}
	else
	{
		if (i == 1 || i == y)
		{
			ft_putchar('-');
		}
		else if (j == 1 || j == x)
		{
			ft_putchar('|');
		}	
		else
		{
			ft_putchar(' ');
		}
	}
}

void	rush00(int x, int y)
{
	int	i;
	int	j;

	i = 1;
	while (i <= y)
	{
		j = 1;
		while (j <= x)
		{
			print_things(i, j, x, y);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
