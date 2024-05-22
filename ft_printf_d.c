/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_d.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icheri <icheri@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 18:34:55 by icheri            #+#    #+#             */
/*   Updated: 2021/12/06 00:13:14 by icheri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printf_d(long nbr)
{
	char	*str;
	int		i;

	str = ft_itoa(nbr, 10, '0');
	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
	free(str);
}
