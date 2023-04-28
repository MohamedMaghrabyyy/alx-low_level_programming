#include <stdio.h>
/**
 * main - entry point
 * 
 * Return: 0 (terminates)
*/
int main() {
    char *message = "Hello Holberton";

    __asm__(
        "movl $4, %%eax;\n"
        "movl $1, %%ebx;\n"
        "movl %0, %%ecx;\n"
        "movl $15, %%edx;\n"
        "int $0x80;"
        :
        : "r" (message)
        : "%eax", "%ebx", "%ecx", "%edx"
    );

    return 0;
}
