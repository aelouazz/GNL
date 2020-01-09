/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelouazz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 16:01:29 by aelouazz          #+#    #+#             */
/*   Updated: 2019/04/26 00:46:50 by aelouazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** -----------------------------------------------------------------------------
** lexicographically compare the null-terminated strings @s1 and @s2.          |
** -----------------------------------------------------------------------------
*/

int		ft_strcmp(const char *s1, const char *s2)
{
	int i;

	i = 0;
	while (*(s1 + i) && *(s2 + i) && s1[i] == s2[i])
		++i;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
