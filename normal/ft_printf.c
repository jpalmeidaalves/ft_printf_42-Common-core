/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaoalme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 18:51:31 by joaoalme          #+#    #+#             */
/*   Updated: 2022/11/29 19:35:46 by joaoalme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		printed;

	i = 0;
	printed = 0;
	va_start(args, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			i++;
			printed += ft_read_placeholder(str[i], args);
			i++;
		}
		else
		{
			write(1, &str[i++], 1);
			printed++;
		}
	}
	return (printed);
}
/*
#include <stdio.h>
int	main(void)
{
	int i = 30;
	int j = 456;
	char *str =  "hahaha";
	char ch = 'A';
	unsigned int k = 4342;
	unsigned int l = 4294967295;
	int	*ptr = &i;

	ft_printf("ft_printf returns: %d\n", ft_printf("%d %d %s %c %x %X %u - %p ",
				i, j, str, ch, k, k, l, ptr));
	printf("printf returns: %d\n", printf("%d %d %s %c %x %X %u - %p ", i, j,
				str, ch, k, k, l, ptr));
}*/
