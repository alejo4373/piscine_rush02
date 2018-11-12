/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfranco <alfranco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 18:53:05 by alfranco          #+#    #+#             */
/*   Updated: 2018/11/11 19:52:30 by alfranco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_H
# define RUSH_H

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>

int			ft_strlen(char *str);
long long	ft_atoi(char *str);
char		*ft_str_replace(char *str, int rush_num, int x, int y);
int			ft_str_are_equal(char *s1, char *s2);
char		*rush00(int x, int y);
char		*rush01(int x, int y);
char		*rush02(int x, int y);
char		*rush03(int x, int y);
char		*rush04(int x, int y);

typedef char *(*t_fun_ptr)(int, int);

static t_fun_ptr	g_fun_ptr[1] =
{
	rush00,
	// &rush01,
	// &rush02,
	// &rush03,
	// &rush04
};

#endif
