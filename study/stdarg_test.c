#include <stdio.h>
#include <stdarg.h>

/*'int n' is the required argument(must have at least one) - usually used to tell about 
the other arguments. In this example means the number of arguments(integers) */
int	add_nb(int n, ...) 
{
	int	sum;
	int 	i;
	int	x;

	sum = 0;
	/* decalration of a variable of type va_list(type is provided by stdarg.h) with
	   name args*/
	va_list args;	
	/*Function va_start takes 2 arguments, the va_list('args' in this case)
	  and the name of the last required argument('n' in this case) */
	va_start(args, n); //set a pointer to where the arguments are stored
	i = 0;
	while (i < n)
	{
		x = va_arg(args, int);
		sum += x; 
		printf("arg(%d) = %d\n", i, x);
		i++;
	}
	va_end(args);
	return (sum);
}

int 	main(void)
{
	int sum1;
	int sum2;
	int sum3;

	//In this case 2 arguments will be used in and the rest will be ignored
	sum1 = add_nb(2, 6, 2, 5, 9);
	printf("sum1 = %d.\n", sum1);
	//In this case 4 arguments will be used and printed
	sum2 = add_nb(4, 6, 2, 5, 9);
	printf("sum2 = %d.\n", sum2);
	//In this case we will have garbage values
	sum3 = add_nb(6, 6, 2, 5);
	printf("sum3 = %d.\n", sum3);
}
