/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_map.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-mach <iel-mach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 15:59:21 by iel-mach          #+#    #+#             */
/*   Updated: 2022/02/02 00:32:39 by iel-mach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	get_map(char *s)
{
	char	*line;
	char	*new;
	char	*tmp;
	int		fd;

	new = ft_strdup("");
	fd = open(s, O_RDONLY);
	while (1)
	{
		line = get_next_line(fd);
		if (fd < 0)
			exit (1);
		if (!line)
			break ;
		tmp = new;
		new = ft_edit_strjoin(new, line);
		free(tmp);
		free(line);
	}
	ft_solong(new);
}
