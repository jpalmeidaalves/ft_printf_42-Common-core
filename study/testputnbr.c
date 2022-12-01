#include <unistd.h>
int     ft_putchar(char c)
{
        write(1, &c, 1);
        return (1);
}

int     ft_putnbr(int nb)
{
        long int        l_nb;
        int     count;  
 
        l_nb = nb;
        count = 0;
        if (nb == 0)
        	count = 1;
        if (l_nb < 0)
        {
                l_nb = -l_nb;
                ft_putchar('-');
                count++;
        }
        while (nb != 0)
        {
                nb /= 10;
                count++;
        }
        if (l_nb < 10)
                ft_putchar(l_nb + '0');
        else
        {
                ft_putnbr(l_nb / 10);
                ft_putnbr(l_nb % 10);
        }
        return (count);
}

int     ft_putstr(char *str)
{
        unsigned int    count;

        count = 0;
        while (*str)
        {
                ft_putchar(*str++);
                count++;
        }
        return (count);
}

#include <stdio.h>
int	main()
{
	int a = 0;
	//char *s = "hello world";
	printf("\nreturn = %d\n", ft_putnbr(a));	
	//printf("\n%d\n", ft_putstr(s));

}
   
