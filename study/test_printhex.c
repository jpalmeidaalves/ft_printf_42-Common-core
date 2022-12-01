#include "printf.h"

int     ft_put_ptr_r(unsigned int nb, char c)
{
        unsigned long int    nb_l;
        int                             count;

        count = 0;
        nb_l = nb;
        while (nb_l != 0)
        {
                nb_l /= 16;
                count++;
        }
        if (c == 'p')
        	count += ft_putstr_r ("0x");
        if (nb < 16 && (c == 'x' || c == 'p'))
                ft_putchar_r("0123456789abcdef"[nb]);
	else if (nb < 16 && c == 'X')
                ft_putchar_r("0123456789ABCDEF"[nb]);
        else
        {       
                ft_puthex_r(nb / 16, c);
                ft_puthex_r(nb % 16, c);
        }
        return (count);
}

int	main(void)
{
	("\n%d\n", ft_puthex_r(-345, 'x'));
}
