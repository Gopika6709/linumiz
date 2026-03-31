#include <stdio.h>
#include<stdint.h>
int main() {
    uintptr_t adr = 0xfffef00c; 

    int value = *(int*)adr;

    printf("Value at address %p is: %d\n", (void*)adr, value);

    return 0;
}
