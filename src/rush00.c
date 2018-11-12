/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfranco <alfranco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/26 12:24:27 by mkryukov          #+#    #+#             */
/*   Updated: 2018/11/11 16:26:38 by alfranco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_putchar(char c);

char	*rush00(int x, int y)
{
	char *str;
	int w;
	int h;
	int i;

	str = (char *)malloc(sizeof(char) * (x + 1) * y + 1);
	i = 0;
	h = 0;
	while (h < y)
	{
		w = 0;
		while (w < x)
		{
			if ((w == 0 && h == 0) || (w == 0 && h == y - 1) ||
			(w == x - 1 && h == 0) || (w == x - 1 && h == y - 1))
				str[i] = 'o';
			else if (w == 0 || w == x - 1)
				str[i] = '|';
			else if (h == 0 || h == y - 1)
				str[i] = '-';
			else
				str[i] = ' ';
			w++;
			i++;
		}
		str[i] = '\n';
		i++;
		h++;
	}
	i++;
	str[i] = '\0';
	return(str);
}
