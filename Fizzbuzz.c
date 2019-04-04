#include <stdio.h>
void print_fizz() {
    printf("Fizz");
}
void print_buzz() {
    printf("Buzz");
}
void main() {
    for(int i = 1; i <= 100; i++) {
        if(i % 3 == 0) { print_fizz(); }
        if(i % 5 == 0) { print_buzz(); }

        if(i % 3 != 0 && i % 5 != 0) {
            printf("%d", i);
        }
        printf("\n");
    }
}
