//1. WAP to find the length of string using strlen function.

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s",str);
    printf("\nLength of the string: %lu\n", strlen(str));

    return 0;
}
