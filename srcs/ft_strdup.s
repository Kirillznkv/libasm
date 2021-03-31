global _ft_strdup
extern ___error
extern _malloc
extern _ft_strcpy
extern _ft_strlen
section .text
_ft_strdup:
	cmp rdi, 0
	je .nul
	push rdi
	call _ft_strlen
	mov rdi, rax
	inc rdi
	call _malloc
	jc .error
	mov rdi, rax
	pop rsi
	call _ft_strcpy
	ret
.error:
	mov r8, rax
	call ___error
	mov [rax], r8
	mov rax, 0
.nul:
	xor rax, rax
	ret