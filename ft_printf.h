/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmustone <mmustone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 12:59:26 by mmustone          #+#    #+#             */
/*   Updated: 2025/08/13 14:51:50 by mmustone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *fmt, ...);
int	ft_print_char(int c);
int	ft_print_str(const char *str);
int	ft_check_format(const char *fmt, va_list ap);
int	ft_put_hex(unsigned long num);
int	ft_print_pointer(void *pointer);
int	ft_print_num(int num);

#endif