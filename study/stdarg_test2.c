#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

size_t	ft_strlen(const char *str)

{
	size_t	count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}

void	print_args(char *placeholder, ...) //required argument defined as a string
{
	va_list	args;	//declaration of a variable of type va_list 
	char	*str;	//declaration of a variable of type char * (to store arguments)
	int	i;

	va_start(args, placeholder); //call va_start function with va_list variable and the
				     // last required argumet 
	i = 0;
	while (placeholder[i]) //iterates through the given string  
	{
		if (placeholder[i] == 'p')  //if the char at index i is a 'p',
					    // print the ith argument(store at str) 
		{
			str = va_arg(args, char *); 	//store the ith argument on str and
			write(1, str, ft_strlen(str));	//print str
			write(1, "\n", 1);	//print a new line
		}
		else
			str = va_arg(args, char *);  //store the ith argument on str
		i++;	
	}
	va_end(args);
}

int	main(void)
{
	print_args("psp", "testing", "stdarg.h", "functions");
	print_args("asp", "print", "this", "strings?");
	print_args("ppp", "this", "time", "yes");
}
