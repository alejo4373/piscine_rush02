/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfranco <alfranco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 13:35:39 by alfranco          #+#    #+#             */
/*   Updated: 2018/11/11 13:55:17 by alfranco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
// #include <stdlib.h>
// #include <sys/types.h>
// #include <sys/uio.h>
#include <unistd.h>

int		main(void)
{
	char ch;
	while (read(0, &ch, 1) > 0)
	{
		printf("%c", ch);
	}
}
