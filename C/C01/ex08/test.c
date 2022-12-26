/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faalmeid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 17:53:53 by faalmeid          #+#    #+#             */
/*   Updated: 2022/09/28 20:00:47 by faalmeid         ###   ########.fr       */
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

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str != '\0')
	{
		str++;
		i++;
	}
	return (i);
}

void    ft_sort_int_tab(int *tab, int size)
{
        int     i;
        int     c;
        int     tmp;

        i = size - 1;
        c = 0;
        while (c < size - 1)
        {
                while (i >= 0)
                {
                        if (tab[c] > tab[i])
                        {
                                tmp = tab[i];
                                tab[i] = tab[c];
                                tab[c] = tmp;
                        }
                        i--;
                }
                c++;
        }
}

int	main(void)
{
	int	i[6] = {5, 4, 3, 2, 1, 7};
	int	c;

	c = 0;
	ft_sort_int_tab(i, ft_strlen(&i));
	while (c < ft_strlen(&i))
	{
		ft_putnbr(i[c]);
		c++;
	}
}

