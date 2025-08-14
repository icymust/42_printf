/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmustone <mmustone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 13:57:55 by mmustone          #+#    #+#             */
/*   Updated: 2025/08/14 15:53:44 by mmustone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_str(const char *str)
{
	int	printed;
	int	ret;

	printed = 0;
	if (!str)
		str = "(null)";
	while (*str)
	{
		ret = ft_print_char(*str++);
		if (ret == -1)
			return (-1);
		printed += ret;
	}
	return (printed);
}
