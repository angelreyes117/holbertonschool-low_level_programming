section .data
    msg db "Hello, World", 0xA ; Define the message with a newline
    len equ $ - msg            ; Calculate the length of the message

section .text
    global _start              ; Entry point for the program

_start:
    mov rax, 1                 ; System call number for write
    mov rdi, 1                 ; File descriptor (stdout)
    mov rsi, msg               ; Address of the message
    mov rdx, len               ; Length of the message
    syscall                    ; Invoke the system call

    mov rax, 60                ; System call number for exit
    xor rdi, rdi               ; Exit code 0
    syscall                    ; Invoke the system call
