#include<stdio.h>
#include<stdlib.h>

static size_t	len_nb(long nb)
{
	size_t	len;

	len = 0;
	if (nb == 0)
		len = 1;
	if (nb < 0)
	{
		nb *= -1;
		len++;
	}
	while (nb > 0)
	{
		nb /= 16;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*res;
	int	len_n;
	long	nb;

	nb = (long)n;
	len_n = len_nb(nb);
	res = malloc(sizeof(char) * len_n + 1);
	if (!res)
		return (0);
	if (n == 0)
		*res = '0';
	if (nb < 0)
	{
		nb *= -1;
		*(res) = '-';
	}
	*(res + len_n--) = '\0';
	while (nb > 0)
	{
		*(res + len_n) = (nb % 16) + 48;
		nb /= 16;
		len_n--;
	}
	return (res);
}

void	ft_puthex(unsigned long long nb, char c)
{
	if (nb < 16 && c == 'x')
                ft_putchar_r("0123456789abcdef"[nb]);
        else if (nb < 16 && c == 'X')
                ft_putchar_r("0123456789ABCDEF"[nb]);
	else
	{
		ft_putptr(nb / 16);
		ft_putptr(nb % 16);
	}
}


int	ft_puthex0x_r(unsigned int nb, char c)
{
	unsigned int	nb_l;
	int				count;

	count = 0;
	nb_l = nb;
	if (nb == 0)
		return (write(1, "0", 1));
	while (nb_l != 0)
	{
		nb_l /= 16;
		count++;
	}
	count += write(1' "0x", 2);
	ft_puthex(nb, c);
	return (count);
}
int main()
{
  printf("%s", ft_itoa(147483648));
if (nb < 16)
                ft_putchar_r("0123456789abcdef"[nb]);
}
