/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthrodr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 15:24:57 by anthrodr          #+#    #+#             */
/*   Updated: 2023/02/01 13:47:47 by anthrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*buffer;
	int	j;

	j = 0;
	i = min;
	if (min >= max)
		return (0);
	buffer = malloc(sizeof(int) * (max - min));
	while (i < max)
		buffer[j++] = i++;
	return (buffer);
}
