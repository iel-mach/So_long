/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_rectangular.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-mach <iel-mach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 15:59:13 by iel-mach          #+#    #+#             */
/*   Updated: 2022/02/02 14:49:08 by iel-mach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_check_rectangular(char *s)
{
	int		i;
	int		j;
	char	**n;

	i = 0;
	j = 0;
	n = ft_split(s, '\n');
	while (s[j] && s[j] != '\n')
		j++;
	while (n[i])
	{
		if (ft_strlen(n[i]) != j)
		{
			write(1, "invalid map.\n", 13);
			exit (1);
		}
		free(n[i]);
		i++;
	}
	free(n);
}
