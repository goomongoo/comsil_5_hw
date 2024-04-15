#include <stdio.h>

void first_branch() {
    printf("Hello from first branch!\n");
}

void second_branch() {
    printf("Hello from second branch!\n");
}

void third_branch() {
    printf("Hello from third branch!\n");
}

int main(void) {
    printf("Hello from main branch!\n");
    first_branch();
    second_branch();

    return 0;
}