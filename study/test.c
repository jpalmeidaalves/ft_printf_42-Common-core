#include "libftprintf.h" 

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
}
