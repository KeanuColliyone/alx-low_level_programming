section .data
	format db "Hello, Holberton",10,0  ; The string to be printed

section .text
	global main

extern printf

main:
	sub rsp, 8      ; Align the stack to a 16-byte boundary (for macOS compatibility)
	mov rdi, format ; Load the address of the format string into rdi
	call printf     ; Call the printf function
	add rsp, 8      ; Restore the stack pointer
	mov rax, 0x60   ; syscall number for exit (64 for x86_64)
	xor rdi, rdi    ; status = 0
	syscall         ; Call the syscall to exit the program

