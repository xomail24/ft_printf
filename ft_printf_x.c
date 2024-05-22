/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_x.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icheri <icheri@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 18:35:05 by icheri            #+#    #+#             */
/*   Updated: 2021/12/06 00:15:40 by icheri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printf_x(unsigned int nbr, char x)
{
	char	*str;
	int		i;

	if (x == 'x' || x == 'X')
		str = ft_itoa(nbr, 16, x);
	else
		str = ft_itoa(nbr, 10, '0');
	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
	free(str);
}
