# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_write.s                                         :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: corozco <corozco@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/03/13 00:38:26 by corozco           #+#    #+#              #
#    Updated: 2020/03/13 07:12:26 by corozco          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

section.text:
	global _ft_write

						;ft_write(a, b, c);
_ft_write:
	cmp rsi, 0x0		;if (b == NULL) {je/jz}
		jz err
	mov rax, 0x0
	mov rax, rdi
	cmp rax, 0			;if (a < 0) {jb/jnae}
		jb err
	cmp rax, 2			;if (a > 2) {ja/jnbe}
		ja err
	mov rax, 0x2000004	;write
	syscall
		jc err
	ret

err:
	mov rax, -1
	ret
