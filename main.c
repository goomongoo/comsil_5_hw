#include <stdio.h>

void first_branch() {
    printf("Hello from first branch!\n");
}

int main(void) {
    printf("Hello from main branch!\n");
    first_branch();

    return 0;
}