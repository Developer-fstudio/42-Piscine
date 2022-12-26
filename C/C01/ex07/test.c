/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faalmeid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 16:31:02 by faalmeid          #+#    #+#             */
/*   Updated: 2022/09/28 17:49:24 by faalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char x)
{
	write(1, &x, 1);
}

void	ft_putnbr(int nbr)
{
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = -nbr;
		ft_putnbr(nbr);
	}
	else if (nbr > 9)
	{
		ft_putchar(48 + (nbr / 10));
		ft_putchar(48 + (nbr % 10));
	}
	else if (nbr == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
	}
	else
	{
		ft_putchar(48 + nbr);
	}
}


void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	c;
	int	tmp[size];

	i = size - 1;
	c = 0;
	while (i >= 0)
	{
		tmp[c] = tab[i];
		c++;
		i--;
	}
	i = 0;
	while (i < size)
	{
		tab[i] = tmp[i];
		i++;
	}
}

int	main(void)
{
	int	i[5] = {5, 4, 3, 2, 1};
	int	c;

	c = 0;
	ft_rev_int_tab(i, 5);
	while (c < 5)
	{
		ft_putnbr(i[c]);
		c++;
	}
}
