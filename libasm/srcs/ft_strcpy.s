# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_strcpy.s                                        :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: corozco <corozco@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/03/12 08:22:03 by corozco           #+#    #+#              #
#    Updated: 2020/03/12 10:31:43 by corozco          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

section.text:
	global _ft_strcpy

_ft_strcpy:
	mov rcx, 0x0
	while:
		cmp BYTE[rsi + rcx], 0x0
		jg cont
		jmp fin
	cont:
		mov al, BYTE[rsi + rcx]
		mov BYTE[rdi + rcx], al
		inc rcx
		jmp while
	fin:
		mov BYTE[rdi + rcx], 0
		mov rax, rdi
		ret
