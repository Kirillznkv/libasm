global _ft_list_size
section .text
_ft_list_size:
	xor		rax, rax
.loop:
	cmp		rdi, 0
	je		.finish
	mov		rdi, [rdi + 8]
	inc		rax
	jmp		.loop

.finish:
	ret