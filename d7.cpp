//7. To find the number of vowels in the given string

#include <stdio.h>
#include <ctype.h>  

int count(const char *str) {
    if (*str == '\0')
        return 0;

    char ch = tolower(*str);
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        return 1 + count(str + 1);
    else
        return count(str + 1);
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  

    int vowelCount = count(str);
    printf("Number of vowels: %d\n", vowelCount);

    return 0;
}