global _ft_strcpy

section .text
_ft_strcpy:
	xor rax, rax
.loop:
	mov dl, byte[rsi + rax]
	mov byte[rdi + rax], dl
	inc rax
	cmp dl, 0
	je .finish
	jmp .loop
.finish:
	mov rax, rdi
	ret