# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_read.s                                          :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: corozco <corozco@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/03/13 06:03:06 by corozco           #+#    #+#              #
#    Updated: 2020/03/13 07:10:38 by corozco          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

section.text:
	global _ft_read

_ft_read:
	mov rax, 0x2000003
	syscall
		jc err
	ret

err:
	mov rax, -1
	ret
