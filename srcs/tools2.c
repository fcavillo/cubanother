/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcavillo <fcavillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 14:56:22 by fcavillo          #+#    #+#             */
/*   Updated: 2021/03/03 10:50:41 by fcavillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/cub3d.h"

int     ft_spawn(char c, t_all *all, int i, int j)
{
    if (c == 'W' || c == 'S' || c == 'E' || c == 'W')
    {
        if (all->map.spawn_orientation != 'A')
            all->map.spawn_nb = 1;
        all->map.spawn_orientation = c;
        all->map.spawn_x = i;
        all->map.spawn_y = j;
        return (1);           
    }
    return (0);
}