#include "libftprintf.h"

int	iter(char *s, int i, char c, int printed, va_list args)
{
	while(str[i] != c)
		i++;
	printed += ft_apply_flags2(str[i], args);
	return (printed);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		printed;

	i = 0;
	printed = 0;
	va_start(args, str);
	while (str[i] != '\0' && str[i] != '%')
	{
		i++;
		if (str[i] != '#' && str[i] != '+' && str[i] != ' ')
			printed += ft_read_placeholder(str[i], args);
		else if (str[i] == '#')
		{
			i++;
			printed += ft_apply_flags2(str[i], args);
		}
		else if (str[i] == '+')
		{
			while (str[i] == '+')
				i++;
			printed += ft_apply_flags2(str[i], args);
		}
		else if (str[i] == ' ')
		{
			while (str[i] == ' ')
				i++;
			printed += ft_apply_flags(str[i], args);
		}
		i++;
	}
	else
		printed += write(1, &str[i++], 1);
	return (printed);
}
