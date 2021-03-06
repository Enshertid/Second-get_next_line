/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanilow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/14 20:34:47 by ymanilow          #+#    #+#             */
/*   Updated: 2019/04/18 20:06:38 by ymanilow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	int baze;

	baze = 1;
	if (n == -2147483648)
	{
		n = 8;
		ft_putstr("-214748364");
	}
	if (n < 0)
	{
		ft_putchar('-');
		baze = -1;
	}
	if (n / 10)
	{
		ft_putnbr(baze * (n / 10));
		ft_putchar(baze * (n % 10) + '0');
	}
	else
		ft_putchar(baze * (n % 10) + '0');
}
