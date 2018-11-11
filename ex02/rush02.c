/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgusache <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/28 22:18:17 by sgusache          #+#    #+#             */
/*   Updated: 2018/10/28 22:18:38 by sgusache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int w;
	int h;

	h = 0;
	while (h < y)
	{
		w = 0;
		while (w < x)
		{
			if ((w == 0 && h == 0) || (w == x - 1 && h == 0))
				ft_putchar('A');
			else if ((w == 0 && h == y - 1) || (w == x - 1 && h == y - 1))
				ft_putchar('C');
			else if (w == 0 || w == x - 1)
				ft_putchar('B');
			else if (h == 0 || h == x - 1)
				ft_putchar('B');
			else
				ft_putchar(' ');
			w++;
		}
		ft_putchar('\n');
		h++;
	}
}
