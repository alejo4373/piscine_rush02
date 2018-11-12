/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfranco <alfranco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 13:35:39 by alfranco          #+#    #+#             */
/*   Updated: 2018/11/11 16:40:32 by alfranco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>

char	*rush00(int x, int y);
int		ft_str_are_equal(char *a, char *b);

int		find_width(char *str)
{
	int count;
	count = 0;
	
	while (*str != '\n')
	{
		count++;
		str++;
	}
	return (count);
}

int		find_hight(char *str)
{
	int count;

	count = 0;
	while (*str != '\0')
	{
		if (*str == '\n')
			count++;
		str++;
	}
	return (count);
}

int		main(void)
{
	char *str;
	char *out;
	char tmp;
	int i;
	int bytes;

	i = 0;
	str = (char *)malloc(sizeof(char) * 6400);
	while(read(0, &tmp, 1))
	{
		str[i] = tmp;
		i++;
	}
	str[i] = '\0';
	out = rush00(find_width(str), find_hight(str));
	printf("w: %i, h: %i\n", find_width(str), find_hight(str));
	// printf("str:\n%s", str);
	// printf("-------------");
	// printf("out:\n%s", out);
	printf("cmp: %i", ft_str_are_equal(str, out));
}
