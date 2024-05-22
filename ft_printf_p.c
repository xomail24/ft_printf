/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icheri <icheri@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 18:34:35 by icheri            #+#    #+#             */
/*   Updated: 2021/12/09 00:30:59 by icheri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_print(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_printf_p(unsigned long long nbr)
{
	int		i;
	char	*g;
	char	arr[20];

	g = "0123456789abcdef";
	if (nbr == 0)
		ft_print("0x0");
	else
	{
		i = 0;
		while (nbr != 0)
		{
			arr[i++] = g[nbr % 16];
			nbr = nbr / 16;
		}
		ft_print("0x");
		while (i > 0)
			ft_putchar(arr[--i]);
	}
}
