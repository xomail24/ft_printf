/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icheri <icheri@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 15:43:26 by icheri            #+#    #+#             */
/*   Updated: 2021/12/09 00:31:18 by icheri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	g_result;

void	ft_putchar(char c)
{
	write(1, &c, 1);
	g_result += 1;
}

static void	ft_parser(const char *str, va_list ap)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '%' && str[i + 1] != '\0')
		{
			i++;
			if (str[i] == 's')
				ft_printf_s(va_arg(ap, char *));
			else if (str[i] == 'x' || str[i] == 'X' || str[i] == 'u')
				ft_printf_x(va_arg(ap, unsigned int), str[i]);
			else if (str[i] == 'd' || str[i] == 'i' )
				ft_printf_d(va_arg(ap, int));
			else if (str[i] == 'c')
				ft_printf_c(va_arg(ap, unsigned int));
			else if (str[i] == 'p')
				ft_printf_p(va_arg(ap, unsigned long long));
			else
				ft_putchar(str[i]);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}

int	ft_printf(const char *str, ...)
{
	va_list	ap;

	g_result = 0;
	va_start(ap, str);
	ft_parser(str, ap);
	va_end(ap);
	return (g_result);
}
