/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcavillo <fcavillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/20 14:45:14 by fcavillo          #+#    #+#             */
/*   Updated: 2021/03/02 11:43:08 by fcavillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "includes/cub3d.h"

void test(t_all *all)
{
    int i;

    i = 0;
    printf("Resolution = %d, %d\n", all->win.x, all->win.y);
    printf("text.n = %s\n", all->tex.n);
    printf("text.s = %s\n", all->tex.s);
    printf("text.e = %s\n", all->tex.e);
    printf("text.w = %s\n", all->tex.w);
    printf("text.spr = %s\n", all->tex.spr);
    printf("color.c = %u\n", all->tex.c);   
    printf("color.f = %u\n", all->tex.f);
    printf("map_x = %d\nmap_y = %d\n", all->map.x, all->map.y);
//    printf("SPAWN :\norientation : %c x : %d y : %d\n", s->cub.spawn_orientation, s->cub.spawn_x, s->cub.spawn_y);
/*    while (i <= s->cub.y)
    {
        printf("%s\n", s->cub.tab[i]);
        i++;
    }*/
}