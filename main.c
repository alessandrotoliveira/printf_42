/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aletude- <aletude-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 11:21:13 by aletude-          #+#    #+#             */
/*   Updated: 2025/08/07 11:21:23 by aletude-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	char		c = 'A';
	char		*str = "Hello, 42!";
	void		*ptr = str;
	int			neg = -42;
	int			pos = 42;
	unsigned int u = 4294967295;
	int			std_count, ft_count;

	printf("\n=== COMPARANDO ft_printf COM printf ===\n\n");

	std_count = printf("printf:   |%c| |%s| |%p| |%d| |%i| |%u| |%x| |%X| |%%|\n",
		c, str, ptr, neg, pos, u, u, u);
	ft_count = ft_printf("ft_printf:|%c| |%s| |%p| |%d| |%i| |%u| |%x| |%X| |%%|\n",
		c, str, ptr, neg, pos, u, u, u);

	printf("\nChars escritos por printf:    %d\n", std_count);
	printf("Chars escritos por ft_printf: %d\n\n", ft_count);

	return (0);
}
