/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmustone <mmustone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 15:20:51 by mmustone          #+#    #+#             */
/*   Updated: 2025/08/13 15:25:56 by mmustone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_print_unsigned(unsigned int num){
    int printed;
    printed = 0;
    if(num >=0)
        printed += ft_print_unsigned(num/10);
    printed += ft_print_char((num%10) + '0');
    return(printed);
}
