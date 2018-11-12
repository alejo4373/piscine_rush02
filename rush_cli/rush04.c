/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfranco <alfranco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/28 17:23:31 by eulee             #+#    #+#             */
/*   Updated: 2018/11/11 13:28:54 by alfranco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_atoi(char *str);
void	ft_putchar(char a);
void	ft_line_one(int x);
void	ft_line_two(int y);
void	ft_line_three(int z);

void	rush(int x, int y)
{
	int c;

	c = 2;
	if (x <= 0 || y <= 0)
		return ;
	else if (y == 1)
		ft_line_one(x);
	else
	{
		ft_line_one(x);
		while (y > c)
		{
			ft_line_two(x);
			c++;
		}
		ft_line_three(x);
	}
}

void	ft_line_one(int x)
{
	int i;

	i = 2;
	if (x == 1)
	{
		ft_putchar('A');
		ft_putchar('\n');
	}
	else
	{
		ft_putchar('A');
		while (x > i)
		{
			ft_putchar('B');
			i++;
		}
		ft_putchar('C');
		ft_putchar('\n');
	}
}

void	ft_line_two(int y)
{
	int i;

	i = 2;
	if (y == 1)
	{
		ft_putchar('B');
		ft_putchar('\n');
	}
	else
	{
		ft_putchar('B');
		while (y > i)
		{
			ft_putchar(' ');
			i++;
		}
		ft_putchar('B');
		ft_putchar('\n');
	}
}

void	ft_line_three(int z)
{
	int i;

	i = 2;
	if (z == 1)
	{
		ft_putchar('C');
		ft_putchar('\n');
	}
	else
	{
		ft_putchar('C');
		while (z > i)
		{
			ft_putchar('B');
			i++;
		}
		ft_putchar('A');
		ft_putchar('\n');
	}
}

int		main(int ac, char **av)
{
	if (ac != 3)
	{
		return (write(1, "Not valid args\n", 15));
	}
	rush(ft_atoi(av[1]), ft_atoi(av[2]));
	return (0);
}
