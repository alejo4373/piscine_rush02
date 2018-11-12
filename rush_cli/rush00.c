/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfranco <alfranco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/28 16:49:09 by tkatolik          #+#    #+#             */
/*   Updated: 2018/11/11 15:43:14 by alfranco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a);
int		ft_atoi(char *str);

void	ft_line_one(int x)
{
	int		i;

	i = 2;
	if (x == 1)
	{
		ft_putchar('o');
		ft_putchar('\n');
	}
	else
	{
		ft_putchar('o');
		while (x > i)
		{
			ft_putchar('-');
			i++;
		}
		ft_putchar('o');
		ft_putchar('\n');
	}
}

void	ft_line_two(int x)
{
	int		i;

	i = 2;
	if (x == 1)
	{
		ft_putchar('|');
		ft_putchar('\n');
	}
	else
	{
		ft_putchar('|');
		while (x > i)
		{
			ft_putchar(' ');
			i++;
		}
		ft_putchar('|');
		ft_putchar('\n');
	}
}

char	*rush00(int x, int y)
{
	int		c;

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
		ft_line_one(x);
	}
}

// int		main(int ac, char **av)
// {
// 	if (ac != 3)
// 	{
// 		return (write(1, "Not valid args\n", 15));
// 	}
// 	rush(ft_atoi(av[1]), ft_atoi(av[2]));
// 	return (0);
// }
