section .text
	global _ft_strcmp

_ft_strcmp :
	mov rax, 0
	mov rbx, 0
	mov rcx, 0
	jmp	cmp

cmp :
	mov al, BYTE [rdi + rcx]
	mov bl, BYTE [rsi + rcx]
	cmp	al, bl
	ja	big
	jb	small
	cmp	al, 0
	je	same
	inc	rcx
	jmp cmp

big :
	mov	rax, 1
	ret

small :
	mov rax, -1
	ret

same :
	mov rax, 0
	ret