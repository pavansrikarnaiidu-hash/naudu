//Count frequency of a given character in a string
#include <stdio.h>

int main() {
    char str[250], ch;
    int count = 0;

    printf("Enter any string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter a character: ");
    scanf("%c", &ch);

    for (int i = 0; str[i] != '\0'; ++i) {
        if (str[i] == ch)
            ++count;
    }

    printf("Frequency of character %c in string is: %d\n", ch, count);
    return 0;
}

