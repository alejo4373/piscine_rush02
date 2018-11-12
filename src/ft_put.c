/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfranco <alfranco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 22:12:52 by alfranco          #+#    #+#             */
/*   Updated: 2018/11/11 22:14:20 by alfranco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rush.h"

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	ft_putnbr(long long n)
{
	char c;

	c = n + '0';
	if (n < 10)
		write(1, &c, 1);
	else
	{
		ft_putnbr(n / 10);
		c = (n % 10) + '0';
		write(1, &c, 1);
	}
}

void	ft_putstr(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		ft_putchar(str[index]);
		index++;
	}
}
