global _ft_strlen

section .text
_ft_strlen:
	xor rax, rax
	cmp byte[rdi + rax], 0
	jne .loop
	ret
.loop:
	inc rax
	cmp byte[rdi + rax], 0
	jne .loop
	ret
