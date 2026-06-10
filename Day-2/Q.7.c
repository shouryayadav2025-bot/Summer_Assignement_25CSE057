#include <stdio.h>

int main() {
    int num, reverse = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &num);

    // Loop runs until num becomes 0
    while (num != 0) {
        remainder = num % 10;          
        reverse = reverse * 10 + remainder;
        num /= 10;
    }

    printf("Reversed number: %d\n", reverse);

    return 0;
}
