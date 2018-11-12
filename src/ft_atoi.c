/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfranco <alfranco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 17:33:41 by alfranco          #+#    #+#             */
/*   Updated: 2018/11/11 22:15:01 by alfranco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rush.h"

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
