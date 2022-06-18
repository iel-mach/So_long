/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_moves.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-mach <iel-mach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 19:52:27 by iel-mach          #+#    #+#             */
/*   Updated: 2022/02/02 21:10:13 by iel-mach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_move_up(t_data *img)
{
	mlx_put_image_to_window(img->mlx, img->mlx_win, img->black, \
		img->playery * 80, img->playerx * 80);
	img->playerx--;
	img->countmove++;
	mlx_put_image_to_window(img->mlx, img->mlx_win, img->black, \
		img->playery * 80, img->playerx * 80);
	mlx_put_image_to_window(img->mlx, img->mlx_win, img->perso, \
		img->playery * 80, img->playerx * 80);
	printf("up = %d\n", img->countmove);
}

void	ft_move_left(t_data *img)
{
	mlx_put_image_to_window(img->mlx, img->mlx_win, img->black, \
		img->playery * 80, img->playerx * 80);
	img->playery--;
	img->countmove++;
	mlx_put_image_to_window(img->mlx, img->mlx_win, img->black, \
		img->playery * 80, img->playerx * 80);
	mlx_put_image_to_window(img->mlx, img->mlx_win, img->perso2, \
		img->playery * 80, img->playerx * 80);
	printf("left = %d\n", img->countmove);
}

void	ft_move_down(t_data *img)
{
	mlx_put_image_to_window(img->mlx, img->mlx_win, img->black, \
		img->playery * 80, img->playerx * 80);
	img->playerx++;
	img->countmove++;
	mlx_put_image_to_window(img->mlx, img->mlx_win, img->black, \
		img->playery * 80, img->playerx * 80);
	mlx_put_image_to_window(img->mlx, img->mlx_win, img->perso, \
		img->playery * 80, img->playerx * 80);
	printf("down = %d\n", img->countmove);
}

void	ft_move_right(t_data *img)
{
	mlx_put_image_to_window(img->mlx, img->mlx_win, img->black, \
		img->playery * 80, img->playerx * 80);
	img->playery++;
	img->countmove++;
	mlx_put_image_to_window(img->mlx, img->mlx_win, img->black, \
		img->playery * 80, img->playerx * 80);
	mlx_put_image_to_window(img->mlx, img->mlx_win, img->perso, \
		img->playery * 80, img->playerx * 80);
	printf("right = %d\n", img->countmove);
}

void	ft_coin(t_data *img)
{
	img->c--;
	img->new[img->playerx][img->playery] = '0';
}
