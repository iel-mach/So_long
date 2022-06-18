/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-mach <iel-mach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 21:42:32 by iel-mach          #+#    #+#             */
/*   Updated: 2022/02/02 01:38:39 by iel-mach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_strncmp(char *s1, char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] && s2[i] && (i < n - 1) && (s1[i] == s2[i]))
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

char	*ft_strrchr(char *s, int c)
{
	int		i;

	i = ft_strlen(s);
	if (c == 0)
		return (s + ft_strlen(s));
	while (i >= 0)
	{
		if (s[i] == c)
			return (&s[i]);
		i--;
	}
	return (0);
}

void	ft_check_extension(char *str)
{
	char	*s;

	s = ft_strrchr(str, '.');
	if (!s)
	{
		printf("map extension invalide !\n");
		exit (1);
	}
	if ((ft_strncmp(s, ".ber", 4) != 0) || (ft_strlen(s) != 4))
	{
		printf("map extension must be end with .ber !\n");
		exit (1);
	}
}
