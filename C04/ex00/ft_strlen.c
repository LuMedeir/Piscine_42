/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumedeir < lumedeir@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 15:44:35 by lumedeir          #+#    #+#             */
/*   Updated: 2023/03/22 18:09:02 by lumedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

// #include <stdio.h>
// #include <unistd.h>
// int    main(void)
// {
//     char    str[] = "teste teste";

//     ft_strlen(str);
//     write(1, str, 12);
//     printf(" tem a quantidade = %d\n", ft_strlen(str));
//     return (0);
// }