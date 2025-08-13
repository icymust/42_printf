/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_num.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmustone <mmustone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 14:35:00 by mmustone          #+#    #+#             */
/*   Updated: 2025/08/13 15:07:45 by mmustone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_num(int num)
{
	int		printed;
	long	l;

	printed = 0;
	l = num;
	if (l < 0)
	{
		printed += ft_print_char('-');
		l = -l;
	}
	if (l == 0){
        printed += ft_print_char('0');
        return(1);
    }

    if (l > 0)
    {
        if (l / 10 > 0)
            printed += ft_print_num(l / 10);
        printed += ft_print_char((l % 10) + '0');
    }
	return (printed);
}
