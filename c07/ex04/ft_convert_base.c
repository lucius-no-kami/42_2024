/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luluzuri <luluzuri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 11:20:02 by luluzuri          #+#    #+#             */
/*   Updated: 2024/10/07 13:35:22 by luluzuri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int		ft_strlen(char *str);
int		handle_base_error(char *base);
int		get_base_index(char *nbr, char *base);
int		ft_atoi_base(char *str, char *base);

int	count_char(long nbr, char *base)
{
	int		count_char;
	int		base_len;

	count_char = 0;
	base_len = ft_strlen(base);
	if (nbr == -2147483648)
		return (9);
	if (nbr < 0)
	{
		nbr = -nbr;
		count_char++;
	}
	while ((nbr / base_len) > 0 || (nbr % base_len) > 0)
	{
		count_char++;
		nbr = nbr / base_len;
	}
	return (count_char);
}

char	*convert_nbr(long nbr, char *base_to, char *dest, int base_len)
{
	int		count;
	long	tmp;

	tmp = nbr;
	count = count_char(nbr, base_to);
	if (nbr < 0)
		nbr = -nbr;
	count--;
	dest[count] = '\0';
	while (count >= 0)
	{
		dest[count] = base_to[nbr % base_len];
		nbr = nbr / base_len;
		count--;
	}
	if (tmp < 0)
	{
		dest[0] = '-';
	}
	return (dest);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	long		res;
	char		*dest;

	if (!handle_base_error(base_from) || !handle_base_error(base_to))
		return (NULL);
	res = ft_atoi_base(nbr, base_from);
	dest = (char *)malloc((count_char(res, base_to) + 1) * sizeof(char));
	if (dest == NULL)
		return (NULL);
	convert_nbr(res, base_to, dest, ft_strlen(base_to));
	return (dest);
}

/*int	main(int argc, char **argv)
{
	char	*dest;
	int		i;

	i = 0;
	dest = NULL;
	if (argc != 4)
	{
		write(1, "wrong arguments", 15);
		return (0);
	}
	dest = ft_convert_base(argv[1], argv[2], argv[3]);
	printf("%s\n", dest);
	free(dest);
	return (0);
}*/
