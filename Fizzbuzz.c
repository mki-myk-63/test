#include <stdio.h>
void print_message(char* message) {
    printf(message);
}
void main() {
    for(int i = 1; i <= 100; i++) {
        if(i % 3 == 0) { print_message("Fizz"); }
        if(i % 5 == 0) { print_message("Buzz"); }

        if(i % 3 != 0 && i % 5 != 0) {
            printf("%d", i);
        }
        printf("\n");
    }
}
