/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_edit_strjoin.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-mach <iel-mach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 15:59:11 by iel-mach          #+#    #+#             */
/*   Updated: 2022/02/02 14:47:37 by iel-mach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

char	*ft_edit_strjoin(char *s1, char *s2)
{
	char	*new;
	int		i;
	int		j;
	int		a;
	int		b;

	a = ft_strlen(s1);
	b = ft_strlen(s2);
	new = malloc ((a + b + 1) * sizeof(char));
	if (!new)
		return (NULL);
	i = 0;
	j = 0;
	while (i < a)
		new[i++] = s1[j++];
	j = 0;
	while (j < b)
		new[i++] = s2[j++];
	new[i] = '\0';
	return (new);
}
