#include<stdio.h>

void TOH(int n, char A, char B, char C) {
    if (n > 0) {
        TOH(n - 1, A, C, B);
        printf("Move disk from %c to %c\n", A, C);
        TOH(n - 1, B, A, C);
    }
}

int main() {
    int numDisks;
    printf("Enter the number of disks: ");
    scanf("%d", &numDisks);

    if (numDisks < 1) {
        printf("Number of disks should be at least 1.\n");
    } else {
        printf("Tower of Hanoi solution:\n");
        TOH(numDisks, 'A','B','C'); 
    }

    return 0;
}