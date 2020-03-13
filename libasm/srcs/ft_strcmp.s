# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_strcmp.s                                        :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: corozco <corozco@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/03/12 23:00:01 by corozco           #+#    #+#              #
#    Updated: 2020/03/13 02:26:58 by corozco          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

section.text:
	global _ft_strcmp

_ft_strcmp:
	mov rcx, 0x0
	while:
		mov bl, BYTE[rdi + rcx]
		cmp bl, BYTE[rsi + rcx]
			je istrue
		jmp fin

istrue:
	cmp bl, 0x0
		je exitok
	inc rcx
	jmp while

fin:
	mov al, bl
	sub al, BYTE[rsi + rcx]
	movsx rax, al
	ret

exitok:
	mov rax, 0x0
	ret
