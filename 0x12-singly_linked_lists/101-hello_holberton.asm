	section .data
	msg db 'Hello, Holberton', 10

	section .text
	global main

	extern printf

main:
	push rbp
	mov rbp, rsp

	lea rdi, [msg]
	xor eax, eax
	call printf

	mov rsp, rbp
	pop rbp
	xor eax, eax
	ret
