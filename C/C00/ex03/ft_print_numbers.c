/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faalmeid <faalmeid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 15:52:33 by faalmeid          #+#    #+#             */
/*   Updated: 2022/09/22 16:02:44 by faalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putint(int c)
{
	write(1, c, 1);
}

void	ft_print_numbers(void)
{
	int	a;

	a = 48;
	while (a <= 57)
	{
		ft_putint(a);
		a++;
	}
}
