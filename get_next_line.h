/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykopiika <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 16:40:07 by ykopiika          #+#    #+#             */
/*   Updated: 2019/01/11 16:40:20 by ykopiika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include "libft/libft.h"
# define BUFF_SIZE 1

typedef struct		s_lfd
{
	char			s[BUFF_SIZE + 1];
	char			*str;
	char			*new_nl;
	int				fd;
	ssize_t			rd;

	struct s_lfd	*next;
}					t_lfd;

int					get_next_line(const int fd, char **line);

#endif
