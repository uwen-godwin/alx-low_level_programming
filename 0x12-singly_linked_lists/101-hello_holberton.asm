global main
extern printf
main:
        mov edi, format
        xor eat, eax
        call printf
        mov eax, 0
        ret
format: ab 'Hello, Holberton\n', 0
