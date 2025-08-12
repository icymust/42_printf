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

// int check_format(){

// }

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
			if (*fmt == 'c')
				printed = ft_print_char(va_arg(ap, int));
			else if (*fmt == 's')
				printed = ft_print_str(va_arg(ap, const char *));
			else
				printed = ft_print_char(*fmt);
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
