/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-mach <iel-mach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 00:27:59 by iel-mach          #+#    #+#             */
/*   Updated: 2022/02/02 00:39:57 by iel-mach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

char	*ft_strdup(char *src)
{
	int		i;
	size_t	s;
	char	*t;

	s = ft_strlen(src);
	t = malloc ((s + 1) * sizeof (char));
	if (!t)
		return (NULL);
	i = 0;
	while (src[i])
	{
		t[i] = src[i];
		i++;
	}
	t[i] = '\0';
	return (t);
}
