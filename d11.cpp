//WAP to simulate the use of MOD operator.

#include <stdio.h>

int mod(int dividend, int divisor) {
    if (divisor == 0) {
        printf("Error: Division by zero.\n");
        return -1; 
    }
    int remainder = dividend;

    while (remainder >= divisor) {
        remainder = remainder - divisor;
    }
    return remainder;
}

int main() {
    int dividend, divisor;

    printf("Enter dividend and divisor: ");
    scanf("%d %d", &dividend, &divisor);

    if (divisor == 0) {
        printf("Division by zero is undefined.\n");
    } else {
        int result = mod(dividend, divisor);
        printf("Simulated %d %% %d = %d\n", dividend, divisor, result);
    }

    return 0;
}