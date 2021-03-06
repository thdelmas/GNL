/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thdelmas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 15:31:02 by thdelmas          #+#    #+#             */
/*   Updated: 2018/11/29 00:29:10 by thdelmas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 2
# include <unistd.h>
# include <stdlib.h>
# include "libft/libft.h"

int					get_next_line(const int fd, char **line);

typedef struct		s_flst
{
	char			**content;
	int				num;
	struct s_flst	*next;
}					t_flst;
#endif
