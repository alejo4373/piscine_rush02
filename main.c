/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfranco <alfranco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 13:35:39 by alfranco          #+#    #+#             */
/*   Updated: 2018/11/11 15:36:29 by alfranco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>

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
	printf("w: %i, h: %i", find_width(str), find_hight(str));
}
