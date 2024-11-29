section .data
    msg db 'Hello, World', 0xA  ; The message to be printed, with a newline character

section .text
    global _start  ; Tells the linker the entry point of the program

_start:
    ; sys_write (system call number 1)
    ; Parameters: fd (1 for stdout), pointer to the message, length of the message
    mov rax, 1          ; syscall number for sys_write
    mov rdi, 1          ; file descriptor 1 (stdout)
    mov rsi, msg        ; address of the message to print
    mov rdx, 14         ; length of the message (13 characters + newline)
    syscall             ; make the system call

    ; sys_exit (system call number 60)
    mov rax, 60         ; syscall number for sys_exit
    xor rdi, rdi        ; exit status 0
    syscall             ; make the system call
