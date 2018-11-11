/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgusache <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/28 22:39:27 by sgusache          #+#    #+#             */
/*   Updated: 2018/10/28 22:39:33 by sgusache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int w;
	int h;

	w = 1;
	h = 1;
	while (h != y + 1)
	{
		while (w != x + 1)
		{
			if ((w == 1 && h == 1) || (w == x && h == y && h > 1 && w > 1))
				ft_putchar('A');
			else if (((w == 1 || w == x) && (h > 1 && h < y)) ||
			((w > 1 && w < x) && (h == 1 || h == y)))
				ft_putchar('B');
			else if ((w > 1 && w < x) || (h > 1 && h < y))
				ft_putchar(' ');
			else if ((w == x && h == 1) || (w == 1 && h == y))
				ft_putchar('C');
			w++;
		}
		ft_putchar('\n');
		w = 1;
		h++;
	}
}
