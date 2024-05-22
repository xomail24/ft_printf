/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icheri <icheri@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 20:30:07 by icheri            #+#    #+#             */
/*   Updated: 2021/12/23 16:10:58 by icheri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int				ft_printf(const char *str, ...);

size_t			ft_strlen(const char *str);

char			*ft_itoa(long n, int base, char x);

void			ft_putchar(char c);

void			ft_printf_c(unsigned char c);

void			ft_printf_d(long nbr);

void			ft_printf_s(char *str);

void			ft_printf_x(unsigned int nbr, char x);

void			ft_printf_p(unsigned long long nbr);

#endif
