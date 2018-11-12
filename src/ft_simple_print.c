/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_simple_print.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfranco <alfranco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 18:21:24 by alfranco          #+#    #+#             */
/*   Updated: 2018/11/11 21:19:14 by alfranco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rush.h"

char	*ft_str_replace(char *str, int rush_num, int x, int y)
{
	int str_len;
	int i;

	str_len = ft_strlen(str);
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '#')
			str[i] = x - '0';
		if (str[i] == '*')
			str[i] = y - '0';
		if (str[i] == '^')
			str[i] = rush_num - '0';
		i++;
	}
	return (str);
}

