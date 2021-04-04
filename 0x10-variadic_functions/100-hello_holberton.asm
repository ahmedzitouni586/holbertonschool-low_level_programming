section .data 	; data section
	message:	db 'Hello, Holberton', 0x0A 	; message with new line

section .text	; code section
	global main	; entry point

main:

	mov	edx, 17
	mov 	ecx, message
	mov	ebx, 1	; write
	mov 	eax, 4	; stdout
	int 	0x80	; interrupt 80 hex, call made to OS directly

	mov 	ebx, 0	; exit code
	xor 	eax, 1	; output to kernel
	int 	0x80