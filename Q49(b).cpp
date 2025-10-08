//Print initials of a name with the surname displayed in full
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void printInitialsWithSurname(char* name) {
    int len = strlen(name);
    char word[50];
    int wIndex = 0;


    while (*name == ' ') name++;

    
    for (int i = 0; i <= len; i++) {
        if (name[i] != ' ' && name[i] != '\0') {
            word[wIndex++] = name[i];
        } else if (wIndex > 0) {
            word[wIndex] = '\0';

            
            if (name[i] == '\0' || (name[i] == ' ' && name[i+1] == '\0')) {
                
                word[0] = toupper(word[0]);
                for (int j = 1; word[j]; j++) {
                    word[j] = tolower(word[j]);
                }
                printf("%s\n", word);
            } else {
                
                printf("%c. ", toupper(word[0]));
            }

            wIndex = 0;
        }
    }
}

int main() {
    char name[100];

    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);
    size_t len = strlen(name);
    if (len > 0 && name[len-1] == '\n') {
        name[len-1] = '\0';
    }

    printf("Initials with surname: ");
    printInitialsWithSurname(name);

    return 0;
}

