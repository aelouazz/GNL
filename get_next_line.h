/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelouazz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/16 18:57:51 by aelouazz          #+#    #+#             */
/*   Updated: 2019/06/29 05:01:08 by aelouazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H

# define GET_NEXT_LINE_H
# include "./libft/libft.h"
# include <fcntl.h>
# include <unistd.h>
# define BUFF_SIZE 16

# define RETURN_IF(x, ret) if (x) return (ret);

int		get_next_line(const int fd, char **line);

#endif
