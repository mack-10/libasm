section .text
	global _ft_strdup
	extern _ft_strlen
	extern _ft_strcpy
	extern _malloc
	extern ___error

_ft_strdup :
	call _ft_strlen
	inc rax
	push rdi
	mov rdi, rax
	call _malloc
	cmp rax, 0
	je err
	pop rsi
	mov rdi, rax
	call _ft_strcpy
	ret

err :
	push rax
	call ___error
	pop rdx
	mov [rax], rdx
	mov rax , -1
	ret