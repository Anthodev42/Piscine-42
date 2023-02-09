/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthrodr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 15:24:57 by anthrodr          #+#    #+#             */
/*   Updated: 2023/01/24 11:31:37 by anthrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'))
	{
		return (1);
	}
	return (0);
}

int	ft_stri(int i, char *str)
{
	if (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		return (i++);
	}
	return (i);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	if (str[i] >= 'a' && str[i] <= 'z')
	{
		str[i] = str[i] - 32;
	}
	ft_stri(i, str);
	while (str[i])
	{
		if (!ft_isalnum(str[i - 1]) && ft_isalnum(str[i])
			&& (str[i] >= 'a' && str[i] <= 'z'))
		{	
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
