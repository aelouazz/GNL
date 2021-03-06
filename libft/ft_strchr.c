/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelouazz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/16 17:47:18 by aelouazz          #+#    #+#             */
/*   Updated: 2019/06/30 12:01:53 by aelouazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** -----------------------------------------------------------------------------
** @RET: the address of the first occurence of @c in @s if it exists in it     |
** -----------------------------------------------------------------------------
*/

char				*ft_strchr(const char *s, int c)
{
	unsigned char	chr;

	chr = (unsigned char)c;
	while (*s != chr && *s)
		s++;
	return (*s == chr ? (char *)s : NULL);
}
