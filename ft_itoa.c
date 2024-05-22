/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icheri <icheri@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 10:32:39 by icheri            #+#    #+#             */
/*   Updated: 2021/12/08 23:58:50 by icheri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_abs(long nbr)
{
	if (nbr < 0)
		return (nbr *= -1);
	return (nbr);
}

static int	ft_schet(long n, int base)
{
	int	i;

	i = 0;
	if (n <= 0)
		++i;
	while (n != 0)
	{
		++i;
		n = n / base;
	}
	return (i);
}

char	*ft_itoa(long n, int base, char x)
{
	char	*str;
	int		i;

	i = ft_schet(n, base);
	str = (char *)malloc(i + 1);
	if (str == NULL)
		return (NULL);
	str[i] = '\0';
	if (n < 0)
		str[0] = '-';
	else if (n == 0)
		str[0] = '0';
	while (n != 0)
	{
		str[--i] = ft_abs(n % base);
		if (n % base > 9 && x == 'x')
			str[i] += 'a' - 10;
		else if (n % base > 9 && x == 'X')
			str[i] += 'A' - 10;
		else
			str[i] += '0';
		n = (n / base);
	}
	return (str);
}
