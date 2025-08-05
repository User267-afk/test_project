//4. WAP to find Fibonacci series using recursion.

#include <stdio.h>

int fibonacci(int n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int series, i;
    printf("Enter the number of series: ");
    scanf("%d", &series);

    if (series <= 0) {
        printf("Please enter a positive number.\n");
    } else {
        printf("Fibonacci series: ");
        for (i = 0; i < series; i++) {
            printf("%d ", fibonacci(i));
        }
        printf("\n");
    }

    return 0;
}