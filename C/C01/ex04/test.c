/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faalmeid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 10:10:59 by faalmeid          #+#    #+#             */
/*   Updated: 2022/09/27 11:26:40 by faalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void    ft_div_mod(int *a, int *b)
{
        int     div;
        int     mod;

        div = *a / *b;
        mod = *a % *b;
        *a = div;
        *b = mod;
}

void    ft_putchar(char x)
{
        write(1, &x, 1);
}

void    ft_putnbr(int nbr)
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

int	main(void)
{
	int	c;
	int	d;

	c = 27;
	d = 2;
	ft_putnbr(c);
	write(1, "\n", 1);
	ft_putnbr(d);
	write(1, "\n", 1);
	ft_div_mod(&c,&d);
	ft_putnbr(c);
	write(1, "\n", 1);
	ft_putnbr(d);
	write(1, "\n", 1);
}
