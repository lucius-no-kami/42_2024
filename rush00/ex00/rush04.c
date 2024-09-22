/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucius <lucius@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 15:45:39 by nadboufl          #+#    #+#             */
/*   Updated: 2024/09/22 14:08:17 by rmarcas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);

void	print_things4(int i, int j, int x, int y)
{
	if ((i == 1 && j == 1) || (i == y && j == x && x > 1 && y > 1))
	{
		ft_putchar('A');
	}
	else if ((j == x && i == 1) || (j == 1 && i == y))
	{
		ft_putchar('C');
	}
	else
	{
		if (i == 1 || i == y)
		{
			ft_putchar('B');
		}
		else if (j == 1 || j == x)
		{
			ft_putchar('B');
		}	
		else
		{
			ft_putchar(' ');
		}
	}
}

void	rush04(int x, int y)
{
	int	i;
	int	j;

	i = 1;
	while (i <= y)
	{
		j = 1;
		while (j <= x)
		{
			print_things4(i, j, x, y);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
