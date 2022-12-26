/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faalmeid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 11:59:46 by faalmeid          #+#    #+#             */
/*   Updated: 2022/09/26 17:40:32 by faalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_ints(int a)
{
	char	result;

	if (a < 10)
	{
		ft_putchar('0');
		ft_putchar(a + 48);
	}
	else
	{
		result = 48 + (a / 10);
		ft_putchar(result);
		result = 48 + (a % 10);
		ft_putchar(result);
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_print_ints(a);
			ft_putchar(' ');
			ft_print_ints(b);
			if (a != 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			b++;
		}
		a++;
	}
}

int	main(void)
{
	ft_print_comb2();
}
