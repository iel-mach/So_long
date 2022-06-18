/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-mach <iel-mach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 15:59:47 by iel-mach          #+#    #+#             */
/*   Updated: 2022/02/02 21:17:05 by iel-mach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdio.h>
# include <mlx.h>

# define WALL "./imgs/wall.xpm"
# define PERSO "./imgs/perso.xpm"
# define PERSO2 "./imgs/perso2.xpm"
# define COIN "./imgs/coin.xpm"
# define DOOR "./imgs/door.xpm"
# define BLACK "./imgs/black.xpm"

typedef struct s_data {
	int		i;
	int		j;
	int		x;
	int		y;
	int		c;
	int		p;
	int		e;
	int		count;
	void	*wall;
	void	*img1;
	void	*perso;
	void	*perso2;
	void	*coin;
	void	*door;
	void	*black;
	int		img_width;
	int		img_height;
	void	*mlx;
	void	*mlx_win;
	char	**new;
	int		playerx;
	int		playery;
	int		countmove;
}				t_data;

typedef struct s_check {
	int	i;
	int	c;
	int	p;
	int	e;
}				t_check;

int		ft_strlen(char *str);
int		check_line(char *s);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_edit_strjoin(char *s1, char *s2);
char	*get_next_line(int fd);
char	*ft_getline(int fd, char *a);
char	*ft_after_line(char *s);
char	*ft_before_line(char *s);
char	*ft_substr(char *s, int start, int len);
void	get_map(char *s);
void	ft_solong(char *s);
void	ft_check_rectangular(char *s);
void	check_variable(char *s);
void	ft_top_wall(char *s);
void	ft_down_wall(char *s);
char	**ft_split(char const *s, char c);
void	ft_put_win(char *s);
int		key_hook(int keycode, t_data *img);
void	ft_move_up(t_data *img);
void	ft_move_left(t_data *img);
void	ft_move_down(t_data *img);
void	ft_move_right(t_data *img);
void	ft_coin(t_data *img);
void	ft_wrong(t_check *check);
int		ft_exit(void);
int		ft_strncmp(char *s1, char *s2, size_t n);
char	*ft_strrchr(char *s, int c);
void	ft_check_extension(char *str);
char	*ft_strdup(char *src);
#endif