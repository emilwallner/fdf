/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_features.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewallner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/16 22:29:54 by ewallner          #+#    #+#             */
/*   Updated: 2016/12/17 16:20:52 by ewallner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "fdf.h"
#include "unistd.h"

void	clean_and_launch(t_vars *e)
{
	mlx_clear_window(e->mlx, e->win);
	adjust_vars(e);
	print_cords(e);
//	mlx_expose_hook(e->win, zoom_that_shit, e);
}

void	increase_depth(int keycode, t_vars *e)
{
	if (keycode == 83)
		e->depth += 1;
	else
		e->depth -= 1;
	clean_and_launch(e);
}

void	create_trip(t_vars *e)
{
	int i;
	i = 0;
	if(e->coloron == 1)
		e->coloron = 0;
	else
		e->coloron = 1;
	clean_and_launch(e);
}

void	increase_const_one(int keycode, t_vars *e)
{
	if (keycode == 86)
		e->const1 += 0.1;
	else
		e->const1 -= 0.1;
	clean_and_launch(e);
}

void	increase_const_two(int keycode, t_vars *e)
{
	if (keycode == 91)
		e->const2 += 0.1;
	else
		e->const2 -= 0.1;
	clean_and_launch(e);
}

void	move_me_in(int keycode, t_vars *e)
{
	if (keycode == 69)
		e->zoom += 10;
	else
		e->zoom -= 10;
	clean_and_launch(e);
}

void	move_me_upndown(int keycode, t_vars *e)
{
	if (keycode == 125)
		e->yc = e->yc + 50;
	else
		e->yc = e->yc - 50;
	clean_and_launch(e);
}
void	move_me_leftnright(int keycode, t_vars *e)
{
	if (keycode == 124)
		e->xc = e->xc + 50;
	else
		e->xc = e->xc - 50;
	clean_and_launch(e);
}
