/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmustone <mmustone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 11:38:08 by mmustone          #+#    #+#             */
/*   Updated: 2025/08/12 15:34:01 by mmustone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check_format(const char *fmt, va_list ap)
{
	if (*fmt == 'c')
		return (ft_print_char(va_arg(ap, int)));
	else if (*fmt == 's')
		return (ft_print_str(va_arg(ap, const char *)));
	else if(*fmt == 'p')
		return;
	else if(*fmt == 'i')
		return;
	else if(*fmt == 'u')
		return;
	else if(*fmt == 'x')
		return;
	else if(*fmt == 'X')
		return;
	else if(*fmt == 'd')
		return;
	else
		return (ft_print_char(*fmt));
}

int	ft_printf(const char *fmt, ...)
{
	va_list	ap;
	int		printed;
	int		total;

	total = 0;
	va_start(ap, fmt);
	while (*fmt)
	{
		if (*fmt == '%')
		{
			fmt++;
			printed = ft_check_format(fmt, ap);
		}
		else
			printed = ft_print_char(*fmt);
		if (printed < 0)
		{
			va_end(ap);
			return (-1);
		}
		total += printed;
		fmt++;
	}
	va_end(ap);
	return (total);
}
