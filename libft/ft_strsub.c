/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelouazz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/26 22:57:25 by aelouazz          #+#    #+#             */
/*   Updated: 2019/06/30 12:14:40 by aelouazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** -----------------------------------------------------------------------------
** Copies @len Bytes starting from position @start of the string @s            |
** @RET: the sub string @result resulted from copying                          |
** -----------------------------------------------------------------------------
*/

char			*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char		*tmp;

	if (!s)
		return (NULL);
	if (!(tmp = ft_strnew(len)))
		return (NULL);
	ft_strncpy(tmp, &s[start], len);
	return (tmp);
}
