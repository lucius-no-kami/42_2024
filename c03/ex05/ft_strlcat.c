/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luluzuri <luluzuri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 11:41:32 by luluzuri          #+#    #+#             */
/*   Updated: 2024/09/22 11:47:19 by luluzuri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bsd/string.h>
#include <stdio.h>

int main(void)
{
	char a[50] = "salut";
	char *b = "test";

	printf("%zu\n", strlcat(a, b, 5));
	printf("%s\n", a);
	printf("%s\n", b);

	return (0);
}