/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmustone <mmustone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 13:53:46 by mmustone          #+#    #+#             */
/*   Updated: 2025/08/12 15:31:44 by mmustone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_char(int c)
{
	unsigned char	ch;

	ch = (unsigned char)c;
	if (write(1, &ch, 1) != 1)
		return (-1);
	return (1);
}
