# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_strdup.s                                        :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: corozco <corozco@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/03/13 03:20:38 by corozco           #+#    #+#              #
#    Updated: 2020/03/13 07:22:33 by corozco          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

section.text:
	global _ft_strdup
	extern _ft_strlen
	extern _ft_strcpy
	extern _malloc

_ft_strdup:
	call _ft_strlen		;return (rax) size
	add rax, 1			;size + 1
	push rdi			;The value of the stack register is updated
	call _malloc
	pop rdi				;restoring
	cmp rax, 0x0		;malloc failed
		je err
	push rsi
	mov rsi, rdi		; set rep loop count
	mov rdi, rax		; set malloc return adress as destination
	call _ft_strcpy
	pop rsi
	ret

err:
	mov rax, -1
	ret
