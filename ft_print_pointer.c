/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmustone <mmustone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 11:21:08 by mmustone          #+#    #+#             */
/*   Updated: 2025/08/13 14:11:24 by mmustone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_pointer(void *pointer)
{
	int				printed;
	unsigned long	l;

	printed = 0;
	l = (unsigned long)pointer;
	if (!pointer)
		return (ft_print_str("0x0"));
	printed += write(1, "0x", 2);
	printed += ft_put_hex(l);
	return (printed);
}
