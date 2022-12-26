/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faalmeid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 11:43:40 by faalmeid          #+#    #+#             */
/*   Updated: 2022/09/27 13:07:32 by faalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>


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

int	main(void)
{
	char	string[] = "Hello World";
	int	strlen;

	strlen = ft_strlen(string);
	ft_putnbr(strlen);

}
