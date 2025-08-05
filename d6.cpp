//6. Write a recursive program to solve the following problems. To find the sum of digits of any given positive number.

#include <stdio.h>

int sumOfDigits(int n) {
    if (n == 0)
        return 0;
    return (n % 10) + sumOfDigits(n / 10);
}

int main() {
    int num;
    printf("Enter a positive number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Please enter a positive number.\n");
    } else {
        printf("Sum of digits of %d is %d\n", num, sumOfDigits(num));
    }

    return 0;
}