/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_str_array.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergey <sergey@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 17:27:58 by sergey            #+#    #+#             */
/*   Updated: 2021/09/29 17:27:58 by sergey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void	free_str_array(char **str_arr, int index)
{
	int	i;

	i = 0;
	while (i < index)
		free(str_arr[index++]);
}
