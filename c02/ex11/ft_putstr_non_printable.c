/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucius <lucius@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 20:21:09 by lucius            #+#    #+#             */
/*   Updated: 2024/09/22 21:25:54 by lucius           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	*hex;

	hex = "0123456789abcdef";
	i = 0;
	while (str[i] != '\0' || (str[i + 1] >= 32 && str[i + 1] <= 126))
	{
		if ((str[i] >= 0 && str[i] <= 31) || str[i] == 127)
		{
			write(1, "\\", 1);
			ft_putchar(hex[str[i] / 16]);
			ft_putchar(hex[str[i] % 16]);
			i++;
		}
		ft_putchar(str[i]);
		i++;
	}
}

/*int main(void)
{
	char str[] = "Coucou\a \b \t \n \v \f \r \0 tu vas bien";

	ft_putstr_non_printable(str);

	return (0);
}*/