/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumedeir < lumedeir@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 11:28:40 by lumedeir          #+#    #+#             */
/*   Updated: 2023/03/10 15:58:45 by lumedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_operation(int x, int y)
{
	char	p[5];

	p[0] = x / 10 + '0';
	p[1] = x % 10 + '0';
	p[2] = ' ';
	p[3] = y / 10 + '0';
	p[4] = y % 10 + '0';
	write (1, &p, 5);
}

void	ft_print_comb2(void)
{
	int	x;
	int	y;

	x = 0;
	y = 1;
	while (x <= 98)
	{
		if (y > 1)
		{
			y = x + 1;
		}
		while (y <= 99)
		{
			ft_operation(x, y);
			if (x < 98)
				write (1, ", ", 2);
					y++;
		}
		x++;
	}
}
