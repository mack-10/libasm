section .text
	global _ft_strcpy

_ft_strcpy :
	mov rax, 0
	mov rcx, 0
	jmp copy

copy :
	mov	al, BYTE [rsi + rcx]
	mov BYTE [rdi + rcx], al
	cmp	al, 0
	je	end
	inc	rcx
	jmp	copy

end :
	mov rax, rdi
	ret
