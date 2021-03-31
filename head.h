/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   head.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshanti <kshanti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 23:38:52 by kshanti           #+#    #+#             */
/*   Updated: 2021/03/31 23:28:12 by kshanti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEAD_H
# define HEAD_H

# include "string.h"
# include "stdlib.h"
# include "stdio.h"
# include "errno.h"

typedef struct		s_list
{
	void			*data;
	struct s_list	*next;
}					t_list;

size_t		ft_strlen(const char *str);
size_t		ft_write(int fd, const void *buf, size_t size);
size_t		ft_read(int fd, void *buf, size_t size);
char		*ft_strcpy(char *s1, const char *s2);
char		*ft_strdup(const char *str);
int			ft_strcmp(const char *s1, const char *s2);
int			ft_list_size(t_list * tmp);

#endif