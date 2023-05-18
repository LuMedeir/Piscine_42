/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   : ft_strlen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumedeir < lumedeir@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 14:36:22 by lumedeir          #+#    #+#             */
/*   Updated: 2023/03/14 14:42:23 by lumedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_strlen(char *str);

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while ('\0' != str[i])
	{
		i++;
	}
	return (i);
}

// int    main(void)
// {
//     char    str[] = "vai curintia";

//     ft_strlen(str);
//     write(1, str, 12);
//     printf(" tem a quantidade de char de = %d\n", ft_strlen(str));
//     return (0);
// }