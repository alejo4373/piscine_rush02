/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfranco <alfranco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 13:35:39 by alfranco          #+#    #+#             */
/*   Updated: 2018/11/11 22:22:42 by alfranco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/rush.h"

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

void	print_result(int *arr_results, int x, int y)
{
	char	*str;
	int		i;

	i = 0;
	str = (char *)malloc(sizeof(char) * 2048);
	if (!str)
	{
		printf("Error !str\n");
		return ;
	}
	while (i <= 5)
	{
		if (arr_results[i] == 1)
			ft_str_replace("rush-0^[#][*]", i, x, y);
	}
}

int		main(void)
{
	int		arr_result[5];
	char	*str;
	char	*out;
	char	tmp;
	int		i;

	i = 0;
	str = (char *)malloc(sizeof(char) * 6400);
	while (read(0, &tmp, 1))
	{
		str[i] = tmp;
		i++;
	}
	str[i] = '\0';
	i = 0;
	while (i <= 4)
	{
		out = g_fun_ptr[i](find_width(str), find_hight(str));
		arr_result[i] = ft_str_are_equal(str, out);
		i++;
	}
	ft_print(arr_result, find_width(str), find_hight(str));
	return (0);
}
