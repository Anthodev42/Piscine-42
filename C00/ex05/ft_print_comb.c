/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthrodr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 15:24:57 by anthrodr          #+#    #+#             */
/*   Updated: 2023/01/19 13:38:03 by anthrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print(char n1, char n2, char n3)
{
	if (n3 != n2 && n2 != n1 && n3 != n1)
	{
		write(0, &n1, 1);
		write(0, &n2, 1);
		write(0, &n3, 1);
		write(0, ", ", 2);
	}
}

void	ft_print_print(char n1, char n2, char n3)
{
	if (n1 != '7' || n2 != '8' || n3 != '9')
	{
		ft_print(n1, n2, n3);
	}
	else
	{
		write(0, "789", 3);
	}
}

void	ft_print_comb(void)
{
	char	n1;
	char	n2;
	char	n3;

	n1 = '0';
	n2 = '1';
	n3 = '2';
	while (n1 <= '9')
	{
		while (n2 <= '9')
		{
			while (n3 <= '9')
			{
				ft_print_print(n1, n2, n3);
				n3++;
			}
			n2++;
			n3 = n2 + 1;
		}
		n1++;
		n2 = n1;
	}
}
