/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfranco <alfranco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 17:33:41 by alfranco          #+#    #+#             */
/*   Updated: 2018/11/11 19:25:05 by alfranco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rush.h"

int	ft_strlen(char *str)
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

int			ft_is_space(char c)
{
	if (c == ' '
		|| c == '\n'
		|| c == '\f'
		|| c == '\r'
		|| c == '\t'
		|| c == '\v')
		return (1);
	else
		return (0);
}

char		*ft_advance_white_space(char *str)
{
	while (ft_is_space(*str))
		str++;
	return (str);
}

int			ft_get_sign(char *str)
{
	int sign;

	sign = 1;
	if (*str == '-')
		sign = -1;
	else if (*str == '+')
		sign = 1;
	return (sign);
}

int			ft_is_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

long long	ft_atoi(char *str)
{
	int			sign;
	long long	res;
	long long	digit;

	res = 0;
	str = ft_advance_white_space(str);
	sign = ft_get_sign(str);
	if (!sign)
		return (0);
	if (!ft_is_digit(*str))
		str++;
	while (*str)
	{
		if (ft_is_digit(*str))
		{
			digit = *str - '0';
			res = (res * 10) + digit;
		}
		else
			return (res);
		str++;
	}
	return (res * sign);
}

void		ft_putchar(char a)
{
	write(1, &a, 1);
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

int	ft_str_are_equal(char *s1, char *s2)
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
