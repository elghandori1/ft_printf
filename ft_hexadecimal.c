#include "ft_printf.h"

int	ft_hexadecimal(unsigned long n)
{
	char	*hex;
	int		count;

	count = 0;
	hex = "0123456789abcdef";
    if (n > 15)
        count += ft_hexadecimal(n / 16);
    count += ft_putchar(hex[n % 16]);
    return count;
}
