section .text
	global _main

_main :
	mov rax, 0x2000004
	mov rbx, 1
	mov rsi, msg
	mov rdx, 12
	syscall
	mov rax, 0
	ret

section .data
	msg db "hello world"