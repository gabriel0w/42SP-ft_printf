/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbelo-so <gbelo-so@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 18:12:14 by gbelo-so          #+#    #+#             */
/*   Updated: 2021/12/11 18:12:17 by gbelo-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>
# include "libft/libft.h"

int				ft_printf(const char *format, ...);
int				print_char(va_list args);
int				print_number(va_list args);
int				print_pointer(va_list args);
int				print_string(va_list args);
int				print_udecimal(va_list args);
int				print_low_hex(va_list args);
int				print_up_hex(va_list args);
size_t			ft_strlen(const char *string);
char			*ft_strchr(const char *s, int c);
char			*ft_itoa(int n);

#endif