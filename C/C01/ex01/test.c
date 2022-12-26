/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faalmeid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 09:05:24 by faalmeid          #+#    #+#             */
/*   Updated: 2022/09/27 09:44:45 by faalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_ultimate_ft(int ***nbr)
{
	***nbr = 422
}

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

int	main(void)
{
	int	b;
	int	*ptr;
	int	**rptr;
	
	ptr = &b;
	rptr = &ptr;
	b = 24;
	ft_ultimate_ft(&rptr);
	ft_putnbr(b);
}
