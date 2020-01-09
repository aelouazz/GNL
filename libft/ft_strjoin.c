/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelouazz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/26 23:09:10 by aelouazz          #+#    #+#             */
/*   Updated: 2019/06/30 12:12:27 by aelouazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** -----------------------------------------------------------------------------
** this function calculate the total len of @s1 and @s2 and join them in a     |
** fresh string @result then return the joined string                          |
** -----------------------------------------------------------------------------
*/

char		*ft_strjoin(char const *s1, char const *s2)
{
	char	*tmp;

	if (!s1 || !s2)
		return (NULL);
	if (!(tmp = ft_strnew(ft_strlen(s1) + ft_strlen(s2))))
		return (NULL);
	ft_strcpy(tmp, s1);
	ft_strcat(tmp, s2);
	return (tmp);
}
