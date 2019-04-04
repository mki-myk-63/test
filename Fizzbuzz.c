#include <stdio.h>
void fizz() {
    printf("Fizz");
}
void buzz() {
    printf("Buzz");
}
void main() {
    for(int i = 1; i <= 100; i++) {
        if(i % 3 == 0) { fizz(); }
        if(i % 5 == 0) { buzz(); }
        if (i % 3 != 0 && i % 5 != 0) {
            printf("%d", i);
        }
        printf("\n");
    }
}
