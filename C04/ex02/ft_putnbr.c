/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthrodr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 15:24:57 by anthrodr          #+#    #+#             */
/*   Updated: 2023/01/26 14:34:17 by anthrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_numbrlen(unsigned int nbr)
{
	char	c;

	if (nbr == 0)
		return ;
	ft_numbrlen(nbr / 10);
	c = nbr % 10 + '0';
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int	nb2;

	if (nb == 0)
	{
		write (1, "0", 1);
		return ;
	}
	if (nb < 0)
	{
		write (1, "-", 1);
		nb2 = -nb;
	}
	else
	{
		nb2 = nb;
	}
	ft_numbrlen(nb2);
}
