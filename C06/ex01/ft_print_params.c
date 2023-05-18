/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumedeir < lumedeir@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 15:09:25 by lumedeir          #+#    #+#             */
/*   Updated: 2023/03/23 19:03:56 by lumedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int			k;
	char		*a;

	k = 1;
	while (argc > k)
	{
		a = argv[k];
		while (*a != 0)
		{
			write(1, a, 1);
			a++;
		}
		write(1, "\n", 1);
		k++;
	}
	return (0);
}
