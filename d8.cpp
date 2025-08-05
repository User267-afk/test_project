//8. To find the first capital letter in a string.

#include <stdio.h>
#include <ctype.h>  

char firstCapital(const char *str) {
    if (*str == '\0')
        return '\0'; 
    if (isupper(*str))
        return *str;
    return firstCapital(str + 1);
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  

    char result = firstCapital(str);
    if (result == '\0') {
        printf("No capital letter found.\n");
    } else {
        printf("First capital letter is: %c\n", result);
    }

    return 0;
}