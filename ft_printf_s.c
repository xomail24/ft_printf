/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_s.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icheri <icheri@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 18:35:00 by icheri            #+#    #+#             */
/*   Updated: 2021/12/06 00:49:59 by icheri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printf_s(char *str)
{
	int	i;

	if (str == NULL)
	{
		str = "(null)";
		i = 0;
		while (str[i])
		{
			ft_putchar(str[i]);
			i++;
		}
	}
	else
	{
		i = 0;
		while (str[i])
		{
			ft_putchar(str[i]);
			i++;
		}
	}
}
