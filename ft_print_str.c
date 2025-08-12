/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmustone <mmustone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 13:57:55 by mmustone          #+#    #+#             */
/*   Updated: 2025/08/12 15:31:43 by mmustone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_str(const char *str)
{
	int	len;

	if (!str)
	{
		if (write(1, "(NULL)", 6) != 6)
			return (-1);
		return (6);
	}
	len = 0;
	while (str[len])
		len++;
	if (write(1, str, len) != len)
		return (-1);
	return (len);
}
