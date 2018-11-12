/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfranco <alfranco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 17:33:41 by alfranco          #+#    #+#             */
/*   Updated: 2018/11/11 22:24:53 by alfranco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rush.h"

int		ft_strlen(char *str)
{
	int len;

	len = 0;
	while (*str != '\0')
	{
		str++;
		len++;
	}
	return (len);
}

char	*ft_str_replace(char *str, int rush_num, int x, int y)
{
	int str_len;
	int i;

	str_len = ft_strlen(str);
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '#')
			str[i] = x - '0';
		if (str[i] == '*')
			str[i] = y - '0';
		if (str[i] == '^')
			str[i] = rush_num - '0';
		i++;
	}
	return (str);
}

int		ft_str_are_equal(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	if (!(*s1 - *s2))
	{
		return (1);
	}
	return (0);
}

void	ft_print(int *arr, int x, int y)
{
	int i;

	i = 0;
	if (!arr[0] && !arr[1] && !arr[2] && !arr[3] && !arr[4])
	{
		ft_putstr("aucune\n");
		return ;
	}
	while (i <= 4)
	{
		if (arr[i])
		{
			if (i != 0 && arr[i - 1] != 0)
				ft_putstr("|| ");
			ft_putstr("[rush-0");
			ft_putnbr(i);
			ft_putstr("] [");
			ft_putnbr(x);
			ft_putstr("] [");
			ft_putnbr(y);
			ft_putstr("] ");
		}
		i++;
	}
	ft_putstr("\n");
}
