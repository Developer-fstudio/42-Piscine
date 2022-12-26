/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faalmeid <faalmeid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 11:43:20 by faalmeid          #+#    #+#             */
/*   Updated: 2022/09/22 15:59:49 by faalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putint(int c)
{
	write(1, &c, 1);
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

void	main()
{
	ft_print_numbers();
}
