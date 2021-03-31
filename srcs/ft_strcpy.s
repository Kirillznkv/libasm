
section .text
	global _ft_strcpy
_ft_strcpy:
	xor rax, rax
	cmp rdi, 0
	je .error
	cmp rsi, 0
	je .error
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
.error:
	ret