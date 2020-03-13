/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libasm.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corozco <corozco@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/11 04:58:17 by corozco           #+#    #+#             */
/*   Updated: 2020/03/13 07:59:09 by corozco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBASM_H
# define LIBASM_H

# include <unistd.h>

/*
** int	ft_exam(int a, const void *buf, size_t nbyte);
**					|				|			|
**					RDI				RSI			RDX
**
**	//read
**	;rdi(fd), rsi(buff), rdx(nbytes)
*/

typedef struct		s_list
{
	void			*data;
	struct s_list	*next;
}					t_list;

size_t				ft_strlen(const char *s);
char				*ft_strcpy(char *dst, const char *src);
char				*ft_strdup(const char *s1);
int					ft_strcmp(const char *s1, const char *s2);
ssize_t				ft_write(int fildes, const void *buf, size_t nbyte);
ssize_t				ft_read(int fildes, void *buf, size_t nbyte);
int					ft_list_size(t_list *lst);

#endif
