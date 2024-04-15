#include <stdio.h>

void second_branch() {
    printf("Hello from second branch!\n");
}

int main(void) {
    printf("Hello from main branch!\n");
    second_branch();

    return 0;
}