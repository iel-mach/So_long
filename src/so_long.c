/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-mach <iel-mach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 15:59:44 by iel-mach          #+#    #+#             */
/*   Updated: 2022/02/02 21:20:44 by iel-mach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_solong(char *s)
{
	ft_check_rectangular(s);
	ft_top_wall(s);
	ft_down_wall(s);
	check_variable(s);
	ft_put_win(s);
}

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		ft_check_extension(av[1]);
		get_map(av[1]);
	}
	else
		write (1, "erreur argument.\n", 17);
}
