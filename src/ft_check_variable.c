/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_variable.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-mach <iel-mach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 15:59:17 by iel-mach          #+#    #+#             */
/*   Updated: 2022/02/01 21:14:54 by iel-mach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_wrong(t_check *check)
{
	if (check->e < 1 || check->p != 1 || check->c < 1)
	{
		write(1, "check your variable.\n", 21);
		exit(1);
	}
}

void	check_variable(char *s)
{
	t_check	check;

	check.i = 0;
	check.c = 0;
	check.p = 0;
	check.e = 0;
	while (s[check.i])
	{
		if ((s[check.i] != 'E') && (s[check.i] != 'C') && (s[check.i] != 'P') \
		&& (s[check.i] != '0') && (s[check.i] != '1') && (s[check.i] != '\n'))
		{
			write(1, "There is a wrong variable.\n", 27);
			exit(1);
		}
		if (s[check.i] == 'E')
			check.e++;
		if (s[check.i] == 'P')
			check.p++;
		if (s[check.i] == 'C')
			check.c++;
		check.i++;
	}
	ft_wrong(&check);
}
