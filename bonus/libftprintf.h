/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaoalme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 18:50:59 by joaoalme          #+#    #+#             */
/*   Updated: 2022/11/29 20:26:55 by joaoalme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdarg.h>
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_printf(const char *str, ...);
size_t	ft_strlen(const char *str);
int		ft_putchar_r(char c);
int		ft_putnbr_r(int nb);
int		ft_putstr_r(char *str);
int		ft_read_placeholder(char c, va_list args);
int		ft_puthex_r(unsigned int nb, char c);
int		ft_put_uint_r(unsigned int nb);
void	ft_putptr(unsigned long long nb);
int		ft_count_print_ptr(unsigned long long nb);
int		ft_puthex0x_r(unsigned int nb, char c);
int		ft_putnbr_r_space(int nb);
int		ft_putnbr_r_plus(int nb);
int		ft_apply_flags(char c, va_list args);
int		ft_apply_flags2(char c, va_list args);
int		ft_count_nb(int nb);
void	ft_printhex(unsigned int nb, char c);

#endif
