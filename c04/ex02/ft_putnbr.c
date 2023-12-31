/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakebli <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 23:28:08 by rakebli           #+#    #+#             */
/*   Updated: 2023/10/01 15:05:43 by rakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int	a;

	if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
	}
	a = nb;
	if (a > 9)
	{
		ft_putnbr(a / 10);
		ft_putchar(a % 10 + '0');
	}
	else
	{
		a += '0';
		write(1, &a, 1);
	}
}
