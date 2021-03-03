/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   save.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcavillo <fcavillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 10:42:49 by fcavillo          #+#    #+#             */
/*   Updated: 2021/02/25 10:47:54 by fcavillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cub3d.h"

int     ft_check_save(char *str)
{
    int i;

    i = 0;
    if (str[0] == '-' && str[1] == '-' && str[2] == 's' && str[3] == 'a'
        && str[4] == 'v' && str[5] == 'e' && str[6] == '\0'
        && ft_strlen(str) == 6)
        return (1);
    return (0);
}