/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumedeir < lumedeir@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 12:08:04 by lumedeir          #+#    #+#             */
/*   Updated: 2023/03/21 10:41:10 by lumedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *dest)
{
	unsigned int	i;

	i = 0;
	while ('\0' != dest[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				i;
	unsigned int	k;

	i = ft_strlen(dest);
	k = 0;
	while (src[k] != '\0' && k < nb)
	{
		dest[i + k] = src[k];
			k++;
	}
	dest[i + k] = '\0';
	return (dest);
}

// int	main(void)
// {
// 	char dest[20] = "teste1 ";
// 	char src[] = "teste2";
// 	unsigned int nb = 2;
// 	ft_strncat(dest, src, nb);
// 	printf("%s\n", dest);
// }