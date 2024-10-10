/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luluzuri <luluzuri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 11:37:17 by luluzuri          #+#    #+#             */
/*   Updated: 2024/10/07 13:19:18 by luluzuri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	handle_base_error(char *base)
{
	int	i;
	int	j;

	i = -1;
	if (ft_strlen(base) == 1 || ft_strlen(base) == 0)
		return (0);
	while (base[++i])
	{
		j = -1;
		if ((base[i] >= 9 && base[i] <= 13) || base[i] == ' ')
			return (0);
		if (base[i] == '+' || base[i] == '-')
			return (0);
		while (base[++j])
		{
			if (base[i] == base[j] && i != j)
				return (0);
		}
	}
	return (1);
}

int	in_base(char c, char *base)
{
	int	i;

	i = -1;
	while (base[++i])
		if (c == base[i])
			return (1);
	return (0);
}

int	get_base_index(char c, char *base)
{
	int	i;

	i = 0;
	while (c != base[i])
		i++;
	return (i);
}

int	ft_atoi_base(char *str, char *base)
{
	long	result;
	int		sign;
	int		i;
	int		base_len;

	i = 0;
	sign = 1;
	base_len = ft_strlen(base);
	result = 0;
	while ((base[i] >= 9 && base[i] <= 13) || base[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	while (in_base(str[i], base))
	{
		result = (result * base_len) + (get_base_index(str[i], base));
		i++;
	}
	return (result * sign);
}
