/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_win.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-mach <iel-mach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 16:31:55 by iel-mach          #+#    #+#             */
/*   Updated: 2022/02/02 21:16:42 by iel-mach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	key_hook(int keycode, t_data *img)
{
	if ((keycode == 13 || keycode == 126) \
		&& (img->new[img->playerx - 1][img->playery] != '1') \
		&& (!(img->new[img->playerx - 1][img->playery] == 'E' && img->c != 0)))
		ft_move_up(img);
	else if ((keycode == 0 || keycode == 123) \
		&& (img->new[img->playerx][img->playery - 1] != '1') \
		&& (!(img->new[img->playerx][img->playery - 1] == 'E' && img->c != 0)))
		ft_move_left(img);
	else if ((keycode == 1 || keycode == 125) \
		&& (img->new[img->playerx + 1][img->playery] != '1') \
		&& (!(img->new[img->playerx + 1][img->playery] == 'E' && img->c != 0)))
		ft_move_down(img);
	else if ((keycode == 2 || keycode == 124) \
		&& (img->new[img->playerx][img->playery + 1] != '1') \
		&& (!(img->new[img->playerx][img->playery + 1] == 'E' && img->c != 0)))
		ft_move_right(img);
	else if (keycode == 53)
		ft_exit();
	if (img->new[img->playerx][img->playery] == 'C')
		ft_coin(img);
	if ((img->new[img->playerx][img->playery] == 'E') && (img->c) == 0)
		ft_exit();
	return (0);
}

void	ft_count_img(t_data *img, char *s)
{
	img->j = 0;
	img->i = 0;
	img->new = ft_split(s, '\n');
	while (img->new[img->i][img->j])
		img->j++;
	while (img->new[img->i])
	{
		img->i++;
		img->count++;
	}
	img->mlx = mlx_init();
	img->mlx_win = mlx_new_window(img->mlx, img->j * 80, \
		img->count * 80, "So_long");
	img->wall = mlx_xpm_file_to_image(img->mlx, WALL, \
		&img->img_width, &img->img_height);
	img->perso = mlx_xpm_file_to_image(img->mlx, PERSO, \
		&img->img_width, &img->img_height);
	img->perso2 = mlx_xpm_file_to_image(img->mlx, PERSO2, \
		&img->img_width, &img->img_height);
	img->coin = mlx_xpm_file_to_image(img->mlx, COIN, \
		&img->img_width, &img->img_height);
	img->door = mlx_xpm_file_to_image(img->mlx, DOOR, \
		&img->img_width, &img->img_height);
	img->black = mlx_xpm_file_to_image(img->mlx, BLACK, \
		&img->img_width, &img->img_height);
}

void	ft_put_img_one(t_data *img)
{
	mlx_put_image_to_window(img->mlx, \
		img->mlx_win, img->black, img->x, img->y);
	if (img->new[img->i][img->j] == '1')
	{
		mlx_put_image_to_window(img->mlx, \
			img->mlx_win, img->wall, img->x, img->y);
		img->x += 80;
	}
	else if (img->new[img->i][img->j] == '0')
		img->x += 80;
	else if (img->new[img->i][img->j] == 'C')
	{
		mlx_put_image_to_window(img->mlx, \
			img->mlx_win, img->coin, img->x, img->y);
		img->x += 80;
		img->c++;
	}
}

void	ft_put_img_tow(t_data *img)
{
	mlx_put_image_to_window(img->mlx, \
		img->mlx_win, img->black, img->x, img->y);
	if (img->new[img->i][img->j] == 'E')
	{
		mlx_put_image_to_window(img->mlx, \
			img->mlx_win, img->door, img->x, img->y);
		img->x += 80;
	}
	else if (img->new[img->i][img->j] == 'P')
	{
		img->playerx = img->i;
		img->playery = img->j;
		mlx_put_image_to_window(img->mlx, \
			img->mlx_win, img->perso, img->x, img->y);
		img->x += 80;
	}
}

void	ft_put_win(char *s)
{
	t_data	img;

	img.countmove = 0;
	img.x = 0;
	img.y = 0;
	img.count = 0;
	ft_count_img(&img, s);
	img.i = 0;
	img.c = 0;
	while (img.new[img.i])
	{
		img.j = 0;
		img.x = 0;
		while (img.new[img.i][img.j])
		{
			ft_put_img_one(&img);
			ft_put_img_tow(&img);
			img.j++;
		}
		img.y += 80;
		img.i++;
	}
	mlx_hook(img.mlx_win, 2, 1L << 0, key_hook, &img);
	mlx_hook(img.mlx_win, 17, 0, ft_exit, NULL);
	mlx_loop(img.mlx);
}
