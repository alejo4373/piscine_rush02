/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rushes.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfranco <alfranco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/26 12:24:27 by mkryukov          #+#    #+#             */
/*   Updated: 2018/11/11 20:50:43 by alfranco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

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
	if (x == 0 || y == 0)
		return ("");
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
	str[i] = '\0';
	return(str);
}

char	*rush01(int x, int y)
{
	char *str;
	int w;
	int h;
	int i;

	str = (char *)malloc(sizeof(char) * (x + 1) * y + 1);
	i = 0;
	w = 1;
	h = 1;
	if (x == 0 || y == 0)
		return ("");
	while (h != y + 1)
	{
		while (w != x + 1)
		{
			if ((w == 1 && h == 1) || (w == x && h == y && h > 1 && w > 1))
				str[i] = '/';
			else if (((w == 1 || w == x) && (h > 1 && h < y)) ||
			((w > 1 && w < x) && (h == 1 || h == y)))
				str[i] = '*';
			else if ((w > 1 && w < x) || (h > 1 && h < y))
				str[i] = ' ';
			else if ((w == x && h == 1) || (w == 1 && h == y))
				str[i] = '\\';
			w++;
			i++;
		}
		str[i] = '\n';
		w = 1;
		h++;
		i++;
	}
	str[i] = '\0';
	return(str);
}

char	*rush02(int x, int y)
{
	char *str;
	int w;
	int h;
	int i;

	str = (char *)malloc(sizeof(char) * (x + 1) * y + 1);
	i = 0;
	h = 0;
	if (x == 0 || y == 0)
		return ("");
	while (h < y)
	{
		w = 0;
		while (w < x)
		{
			if ((w == 0 && h == 0) || (w == x - 1 && h == 0))
				str[i] = 'A';
			else if ((w == 0 && h == y - 1) || (w == x - 1 && h == y - 1))
				str[i] = 'C';
			else if (w == 0 || w == x - 1)
				str[i] = 'B';
			else if (h == 0 || h == y - 1)
				str[i] = 'B';
			else
				str[i] = ' ';
			w++;
			i++;
		}
		str[i] = '\n';
		i++;
		h++;
	}
	str[i] = '\0';
	return (str);
}

char	*rush03(int x, int y)
{
	char *str;
	int w;
	int h;
	int i;

	str = (char *)malloc(sizeof(char) * (x + 1) * y + 1);
	h = 0;
	i = 0;
	if (x == 0 || y == 0)
		return ("");
	while (h < y)
	{
		w = 0;
		while (w < x)
		{
			if ((w == 0 && h == 0) || (w == 0 && h == y - 1))
				str[i] = 'A';
			else if ((w == x - 1 && h == y - 1) || (w == x - 1 && h == 0))
				str[i] = 'C';
			else if (w == 0 || w == x - 1)
				str[i] = 'B';
			else if (h == 0 || h == y - 1)
				str[i] = 'B';
			else
				str[i] = ' ';
			w++;
			i++;
		}
		str[i] = '\n';
		i++;
		h++;
	}
	str[i] = '\0';
	return(str);
}

char	*rush04(int x, int y)
{
	char *str;
	int w;
	int h;
	int i;

	str = (char *)malloc(sizeof(char) * (x + 1) * y + 1);
	w = 1;
	h = 1;
	i = 0;
	if (x == 0 || y == 0)
		return ("");
	while (h != y + 1)
	{
		while (w != x + 1)
		{
			if ((w == 1 && h == 1) || (w == x && h == y && h > 1 && w > 1))
				str[i] = 'A';
			else if (((w == 1 || w == x) && (h > 1 && h < y)) ||
			((w > 1 && w < x) && (h == 1 || h == y)))
				str[i] = 'B';
			else if ((w > 1 && w < x) || (h > 1 && h < y))
				str[i] = ' ';
			else if ((w == x && h == 1) || (w == 1 && h == y))
				str[i] = 'C';
			w++;
			i++;
		}
		str[i] = '\n';
		w = 1;
		h++;
		i++;
	}
	str[i] = '\0';
	return(str);
}

int		main(void)
{
	printf("%s", rush00(5, 3));
	return (0);
}
