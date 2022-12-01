#include <unistd.h>
#include <stdarg.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long int	l_nb;

	l_nb = nb;
	if (l_nb < 0)
	{
		l_nb = -l_nb;
		ft_putchar('-');
	}
	if (l_nb < 10)
	{
		ft_putchar(l_nb + '0');
	}
	else
	{
		ft_putnbr(l_nb / 10);
		ft_putnbr(l_nb % 10);
	}
}

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

void	read_placeh(char *str, ...)
{
	va_list	arguments; //iniializes the va_list variable
	int	i;	

	va_start(arguments, str);
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			i++;
			if (str[i] == 'd')
			{
				ft_putnbr(va_arg(arguments, int));
				i++;
			}
			else if (str[i] == 's')
			{
				 
				ft_putstr(va_arg(arguments, char *));
				i++;
			}
			else if (str[i] == '%')
			{
				ft_putchar('%');
				i++;
			}
			
		}
		else
		{
			write(1, &str[i++], 1);
			//i++;
		}
	}
}

int	main()
{
	int i = 30;
	char *str =  "its working";
	read_placeh("print int: %d, print string: %s\n", i, str);
	read_placeh("print a percent %%\n");
}

