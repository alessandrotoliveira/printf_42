/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aletude- <aletude-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 15:59:13 by aletude-          #+#    #+#             */
/*   Updated: 2025/08/07 11:23:48 by aletude-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_u(unsigned int n)
{
	int	count;

	count = 0;
	if (n >= 10)
		count += ft_putnbr_u(n / 10);
	count += ft_putchar((n % 10) + '0');
	return (count);
}

int	ft_format(va_list args, char format)
{
	int	count;

	count = 0;
	if (format == 'c')
		count += ft_putchar(va_arg(args, int));
	else if (format == 's')
		count += ft_putstr(va_arg(args, char *));
	else if (format == 'p')
		ft_putptr(args, &count);
	else if (format == 'd' || format == 'i')
		count += ft_putnbr(va_arg(args, int));
	else if (format == 'u')
		count += ft_putnbr_u(va_arg(args, unsigned int));
	else if (format == 'x')
		count += ft_puthexa(va_arg(args, unsigned int), "0123456789abcdef");
	else if (format == 'X')
		count += ft_puthexa(va_arg(args, unsigned int), "0123456789ABCDEF");
	else if (format == '%')
		count += ft_putchar ('%');
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		count;

	i = 0;
	count = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%' && format [i + 1])
			count += ft_format(args, format[++i]);
		else
			count += ft_putchar (format[i]);
		i++;
	}
	va_end(args);
	return (count);
}
