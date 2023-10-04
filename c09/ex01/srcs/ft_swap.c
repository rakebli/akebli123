/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialdidi <ialdidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 16:06:39 by ialdidi           #+#    #+#             */
/*   Updated: 2023/10/03 16:24:20 by ialdidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(char *a, int *b)
{
	int	t;

	t = *a;
	*a = *b;
	*b = t;
}
