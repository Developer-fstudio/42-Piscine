/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faalmeid <faalmeid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 12:39:00 by faalmeid          #+#    #+#             */
/*   Updated: 2022/10/11 13:39:07 by faalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char *str)
{
	int	j;

	j = 0;
	while (str[j])
	{
		write(1, &str[j], 1);
		j++;
	}
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc >= 1)
	{
		while (argv[i])
		{
			ft_putchar(argv[i]);
			i++;
		}
	}
	return (0);
}
