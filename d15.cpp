/*Write a program to stimulate the following logic gates
 a) AND 
b) OR
c) XOR */

#include <stdio.h>

int AND(int a, int b) {
    return a & b;
}

int OR(int a, int b) {
    return a | b;
}

int XOR(int a, int b) {
    return a ^ b;
}

int main() {
    int a, b;

    printf("Enter two binary inputs (0 or 1): ");
    scanf("%d %d", &a, &b);

    if ((a != 0 && a != 1) || (b != 0 && b != 1)) {
        printf("Invalid input! Please enter 0 or 1.\n");
        return 1;
    }

    printf("AND(%d, %d) = %d\n", a, b, AND(a, b));
    printf("OR(%d, %d) = %d\n", a, b, OR(a, b));
    printf("XOR(%d, %d) = %d\n", a, b, XOR(a, b));

    return 0;
}