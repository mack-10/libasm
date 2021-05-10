section .text
	global _ft_strcmp

_ft_strcmp :
	mov rax, 0
	mov rbx, 0
	mov rcx, 0
	jmp	cmp

cmp :
	mov al, BYTE [rsi + rcx]
	mov bl, BYTE [rdi + rcx]
	cmp	al, bl
	jne diff
	cmp	al, 0
	je	same
	inc	rcx
	jmp cmp

diff :
	sub rax, rbx
	ret

same :
	mov rax, 0
	ret