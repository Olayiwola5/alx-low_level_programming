SECTION .data
msg:	db "Hello, Holberton", 0
fmt:	db "%s", 10, 0

	SECTION .text
	extern printf
	global main
main:
	mov rsi, msg ; use rsi instead of esi
	mov rdi, fmt ; use rdi instead of edi
	mov eax, 0
	call printf

	mov eax, 0
	ret

