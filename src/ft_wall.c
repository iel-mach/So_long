/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wall.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-mach <iel-mach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 15:59:24 by iel-mach          #+#    #+#             */
/*   Updated: 2022/01/07 18:40:01 by iel-mach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_top_wall(char *s)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != '\n')
	{
		if (s[i] != '1')
		{
			write (1, "Check the top wall.\n", 20);
			exit (1);
		}
		i++;
	}
	i = 0;
	while (s[i])
	{
		if (((s[i] == '\n') && (s[i + 1] != '1')) \
			|| ((s[i] == '\n') && (s[i - 1] != '1')))
		{
			write (1, "Check the side wall.\n", 21);
			exit (1);
		}
		i++;
	}
}

void	ft_down_wall(char *s)
{
	int	i;

		i = ft_strlen(s) - 1;
	while (s[i] != '\n')
	{
		if (s[i] != '1')
		{
			write (1, "Check the down wall.\n", 21);
			exit (1);
		}
		i--;
	}
}
