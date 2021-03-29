global ft_strlen

segment .text
ft_strlen:
	mov rax, 0
	cmp byte[rdi + rax], 0
	jne .loop
	ret
.loop:
	inc rax
	cmp byte[rdi + rax], 0
	jne .loop
	ret
