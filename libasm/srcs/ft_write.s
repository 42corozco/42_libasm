# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_write.s                                         :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: corozco <corozco@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/03/13 00:38:26 by corozco           #+#    #+#              #
#    Updated: 2020/03/13 03:11:27 by corozco          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

section.text:
	global _ft_write

						;ft_write(a, b, c);
_ft_write:
	cmp rsi, 0x0		;if (b == NULL) {je/jz}
		jz exit
	mov rax, 0x0
	mov rax, rdi
	cmp rax, 0			;if (a < 0) {jb/jnae}
		jb exit
	cmp rax, 2			;if (a > 2) {ja/jnbe}
		ja exit
	mov rax, 0x2000004	;write
	syscall
	ret

exit:
	mov rax, -1
	ret
