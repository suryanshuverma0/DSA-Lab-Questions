#include <stdio.h>

// Recursive function to reverse a number
int reverse(int num) {
    if (num == 0) {
        return 0;
    } else {
        int lastDigit = num % 10;
        int remainingNum = num / 10;
        return (lastDigit + reverse(remainingNum)) * 10;
    }
}

int main() {
    int num;
    printf("Enter a number to reverse: ");
    scanf("%d", &num);

    int reversed = reverse(num);
    printf("Reversed number: %d\n", reversed);

    return 0;
}
