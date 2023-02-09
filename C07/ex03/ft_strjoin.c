/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlasota <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 15:14:59 by hlasota           #+#    #+#             */
/*   Updated: 2023/02/01 13:57:58 by anthrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

char	*ft_join(int size, char **strs, char *sep, char *res)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (i < size)
	{
		while (strs[i][j])
			res[k++] = strs[i][j++];
		j = 0;
		while (sep[j] && i < size - 1)
			res[k++] = sep[j++];
		j = 0;
		i++;
	}
	return (res);
}

char	*ft_strdup(char *src)
{
	char	*str;
	int		i;

	i = 0;
	str = (char *)malloc(ft_strlen(src) * sizeof(char) + 1);
	if (!str)
		return (0);
	while (src[i])
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_charcount(int size, char **strs)
{
	int	i;
	int	charcount;

	i = 0;
	charcount = 0;
	while (i < size)
	{
		charcount += ft_strlen(&strs[i][0]);
		i++;
	}
	return (charcount);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*res;
	int		i;

	i = (ft_charcount(size, strs) + (ft_strlen(sep) * (size - 1)));
	if (size <= 0)
	{
		res = malloc(sizeof(char));
		res[0] = 0;
		return (res);
	}
	res = malloc(sizeof(char) * i);
	return (ft_join(size, strs, sep, res));
}
