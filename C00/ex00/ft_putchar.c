/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumedeir < lumedeir@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 10:11:51 by lumedeir          #+#    #+#             */
/*   Updated: 2023/03/14 15:05:02 by lumedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

// int main(void)
// {
// 	ft_putchar('l');
// 	return(0);
// }