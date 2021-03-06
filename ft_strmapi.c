/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgiraud <thgiraud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 13:55:28 by thgiraud          #+#    #+#             */
/*   Updated: 2017/02/13 14:15:03 by thgiraud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*dst;
	char	*str;

	i = 0;
	str = (char *)s;
	if (!(s))
		return (NULL);
	if (!(dst = ft_strnew(ft_strlen(str))))
		return (NULL);
	while (str[i])
	{
		dst[i] = (*f)(i, str[i]);
		i++;
	}
	return (dst);
}
