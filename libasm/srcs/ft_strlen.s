# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_strlen.s                                        :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: corozco <corozco@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/03/12 06:30:19 by corozco           #+#    #+#              #
#    Updated: 2020/03/13 01:02:24 by corozco          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

section.text:
	global _ft_strlen

_ft_strlen:
	mov rax, 0x0
	while:
		cmp BYTE[rdi + rax], 0x0
			jg cont
		jmp fin

cont:
	inc rax
	jmp while

fin:
		ret
