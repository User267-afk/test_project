//3. WAP to find the sum of natural number using recursion in C.

#include <stdio.h>

int sum(int n) {
    if (n == 0)
        return 0;
    return n + sum(n - 1);
}

int main() {
    int n;
    printf("Enter a natural number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Please enter a non-negative number.\n");
    } else {
        printf("Sum of first %d natural numbers is %d\n", n, sum(n));
    }

    return 0;
}