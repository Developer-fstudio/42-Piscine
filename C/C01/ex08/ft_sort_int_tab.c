/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faalmeid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 17:53:53 by faalmeid          #+#    #+#             */
/*   Updated: 2022/09/28 19:56:58 by faalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	c;
	int	tmp;

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
