; 101-hello_holberton.asm	prints a string using printf
; Assemble:			nasm -f elf64 101-hello_holberton.asm
; Link:				gcc -no-pie -std=gnu89 101-hello_holberton.o -o hello
; Run:				./hello
; Output:			Hello, Holberton

; Declare needed c function
	extern printf			; C function to be called

	section .data			; Data section, initialized variables
msg:	db "Hello, Holberton", 0	; C string needs zero
fmt:	db "%s", 10, 0			; Printf format '\n' '0'

	section .text			; Code section

	global main			; Standard gcc entry point
main:					; Program label for entry point
	push	rbp			; Set up stack frame

	mov	rdi,fmt
	mov	rsi,msg
	mov	rax,0
	call	printf			; Call C function

	pop	rbp			; Restore stack

	mov	rax,0			; Normal no error, return value
	ret				; Return
