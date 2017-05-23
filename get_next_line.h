/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afanneau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/10 14:20:39 by afanneau          #+#    #+#             */
/*   Updated: 2017/01/05 14:40:59 by afanneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>
# include "libft/libft.h"

# define BUFF_SIZE 1000

typedef struct	s_gnl
{
	char		*str;
	char		*eol;
	long		ret;
	long		lenght;
	long		char_lu;

}				t_gnl;

int				get_next_line(const int fd, char **line);
#endif
