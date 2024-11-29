; 100-hello_world.asm
; This 64-bit assembly program prints "Hello, World" followed by a newline using the write syscall.

section .data
    msg db "Hello, World", 0xA ; Message with a newline at the end
    len equ $ - msg            ; Calculate the length of the message

section .text
    global _start

_start:
    mov rax, 1                ; syscall: write (sys_write number)
    mov rdi, 1                ; file descriptor: stdout
    mov rsi, msg              ; pointer to the message
    mov rdx, len              ; length of the message
    syscall                   ; invoke the system call

    ; Exit the program
    mov rax, 60               ; syscall: exit (sys_exit number)
    xor rdi, rdi              ; exit status: 0
    syscall                   ; invoke the system call
