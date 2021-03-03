/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcavillo <fcavillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 13:13:58 by fcavillo          #+#    #+#             */
/*   Updated: 2021/03/03 11:51:35 by fcavillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cub3d.h"
/*
void    ft_exit(t_all *all)
{   
	
	
}

void    ft_error_2(t_all *all)
{
	ft_exit(all);
}

*/
void    ft_error(t_all *all, char *str)
{
	int i;

	printf("%sError\n%s", RED, str);
	i = -1;
	if (all->tex.s)
		free(all->tex.s);
	if (all->tex.n)
		free(all->tex.n);
	if (all->tex.e)
		free(all->tex.e);
	if (all->tex.w)
		free(all->tex.w);
	if (all->tex.spr)
		free(all->tex.spr);
	if (all->map.cub)
		while (++i < all->map.y)
			free(all->map.cub[i]);
	if (all->map.cub)
		free(all->map.cub);
//    ft_error_2(t_all *all);
}