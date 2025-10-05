//Find the first repeating lowercase alphabet in a string
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, index;
    int charCount[26] = {0};

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    
    str[strcspn(str, "\n")] = '\0';

    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] >= 'a' && str[i] <= 'z') {
            index = str[i] - 'a';
            charCount[index]++;
            if(charCount[index] == 2) {
                printf("First repeating lowercase alphabet: %c\n", str[i]);
                return 0;
            }
        }
    }

    printf("No repeating lowercase alphabet found.\n");
    return 0;
}

