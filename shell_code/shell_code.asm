section .text
        BITS    32
global  main
main:   jmp string
code:   xor     ebx, ebx
        xor     edx, edx
        xor     eax, eax
        pop     ecx
        mov     bl, 1
        mov     dl, 8
        mov     al, 4
        int     0x80
        mov     al, 1
        int     0x80
string: call    code
        db      "GOTCHA!", 0x0a
