/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgiraud <thgiraud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 14:45:27 by thgiraud          #+#    #+#             */
/*   Updated: 2017/02/13 14:38:12 by thgiraud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

int		*ft_range(int min, int max)
{
	int		*res;
	int		i;

	i = 0;
	if (min >= max)
		return (0);
	if (!(res = malloc(sizeof(int) * (max - min))))
		return (0);
	while (min < max)
	{
		res[i] = min;
		min++;
		i++;
	}
	return (res);
}
