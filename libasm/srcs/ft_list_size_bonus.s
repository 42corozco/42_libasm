# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_list_size_bonus.s                               :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: corozco <corozco@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/03/13 07:38:54 by corozco           #+#    #+#              #
#    Updated: 2020/03/13 08:04:02 by corozco          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

section.text:
	global _ft_list_size

_ft_list_size:
	mov eax, 0x0
	while:
		cmp rdi, 0x0
			je  end
		inc eax
		mov rdi, [rdi + 8]
		jmp while

end:
	ret
