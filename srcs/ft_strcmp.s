section .text
	global _ft_strcmp
_ft_strcmp:
	mov rax, -1
	cmp rdi, 0
	je .error
	cmp rsi, 0
	je .error
	xor rdx, rdx
	xor rcx, rcx
.loop:
	inc rax
	mov dl, byte[rsi +rax]
	cmp dl, 0
	je .exit
	cmp byte[rdi + rax], dl
	je .loop
.exit:
	mov cl, byte[rdi + rax]
	xor rax, rax
	add rax, rcx
	sub rax, rdx
	ret
.error:
	ret