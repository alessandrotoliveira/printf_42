/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aletude- <aletude-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 16:26:34 by aletude-          #+#    #+#             */
/*   Updated: 2025/08/07 11:20:19 by aletude-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}

int	ft_putstr(char *s)
{
	int	i;

	if (s == NULL)
	{
		return (ft_putstr("(null)"));
	}
	i = 0;
	while (s[i])
	{
		ft_putchar(s[i]);
		i++;
	}
	return (i);
}

int	ft_putnbr(int n)
{
	unsigned int	nb;
	int				count;

	count = 0;
	if (n == -2147483648)
	{
		ft_putstr("-2147483648");
		return (11);
	}
	if (n < 0)
	{
		ft_putchar('-');
		nb = -n;
		count++;
	}
	else
		nb = (unsigned int)n;
	if (nb >= 10)
	{
		count += ft_putnbr (nb / 10);
	}
	count += ft_putchar((nb % 10) + '0');
	return (count);
}

int	ft_puthexa(unsigned long n, const char *base)
{
	int	count;

	count = 0;
	if (n >= 16)
	{
		count += ft_puthexa(n / 16, base);
	}
	count += ft_putchar (base[n % 16]);
	return (count);
}

void	ft_putptr(va_list args, int *count)
{
	unsigned long	ptr;

	ptr = (unsigned long)va_arg(args, void *);
	if (ptr == 0)
		*count += ft_putstr("(nil)");
	else
	{
		*count += ft_putstr("0x");
		*count += ft_puthexa(ptr, "0123456789abcdef");
	}
}
