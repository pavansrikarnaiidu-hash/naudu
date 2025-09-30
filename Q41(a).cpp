//Count characters in a string without using built-in length functions
#include <stdio.h>

int main() {
    char str[100];
    int i, length = 0;

    printf("Enter a string:\n");
    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++) {
        length++;
    }

    printf("Length of input string: %d\n", length);
    return 0;
}

