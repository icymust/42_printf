/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_format.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmustone <mmustone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 11:38:16 by mmustone          #+#    #+#             */
/*   Updated: 2025/08/13 14:53:01 by mmustone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check_format(const char *fmt, va_list ap)
{
	if (*fmt == 'c')
		return (ft_print_char(va_arg(ap, int)));
	else if (*fmt == 's')
		return (ft_print_str(va_arg(ap, const char *)));
	else if (*fmt == 'p')
		return (ft_print_pointer(va_arg(ap, void *)));
	else if (*fmt == 'i' || *fmt == 'd')
		return (ft_print_num(va_arg(ap, int)));
	else if (*fmt == 'u')
		return (0);
	else if (*fmt == 'x')
		return (0);
	else if (*fmt == 'X')
		return (0);
	else
		return (ft_print_char(*fmt));
}
