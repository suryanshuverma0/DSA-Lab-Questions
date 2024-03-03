#include <stdio.h>

// Recursive function to calculate sum of natural numbers
int sum(int n) {
    if (n == 0) {
        return 0;
    } else {
        return n + sum(n - 1);
    }
}

int main() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Invalid input. Please enter a positive integer.\n");
    } else {
        int result = sum(num);
        printf("Sum of natural numbers up to %d is: %d\n", num, result);
    }

    return 0;
}
