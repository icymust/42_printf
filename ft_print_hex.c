/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmustone <mmustone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 11:32:29 by mmustone          #+#    #+#             */
/*   Updated: 2025/08/14 11:32:31 by mmustone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex(unsigned long num, int case_type)
{
	char	*hex_base;
	int		printed;

	printed = 0;
	if (case_type == 1)
		hex_base = "0123456789ABCDEF";
	else
		hex_base = "0123456789abcdef";
	if (num >= 16)
		printed += ft_print_hex(num / 16, case_type);
	printed += ft_print_char(hex_base[num % 16]);
	return (printed);
}
