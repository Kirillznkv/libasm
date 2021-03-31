global _ft_strcmp
section .text
_ft_strcmp:
	mov rax, -1
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