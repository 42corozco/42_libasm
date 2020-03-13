# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_write.s                                         :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: corozco <corozco@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/03/13 00:38:26 by corozco           #+#    #+#              #
#    Updated: 2020/03/13 03:00:32 by corozco          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

section.text:
	global _ft_write

_ft_write:
	cmp rsi, 0x0
		jz exit
	mov rax, 0x0
	mov rax, rdi
	cmp rax, 0
		jb exit
	cmp rax, 2
		ja exit
	mov rax, 0x2000004
	syscall
	ret

exit:
	mov rax, -1
	ret
