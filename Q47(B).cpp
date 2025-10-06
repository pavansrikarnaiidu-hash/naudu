//Find the longest word in a sentence
#include <stdio.h>
#include <string.h>

#define MAX_STRING_LEN 1024

int main() {
    char str[MAX_STRING_LEN];
    char longest_str[MAX_STRING_LEN];
    int len, i, index = 0;
    int max_wlen = 0, wlen = 0;

    printf("Enter a sentence: ");
    fgets(str, MAX_STRING_LEN, stdin);

    len = strlen(str);
    if (str[len-1] == '\n') str[len-1] = '\0';

    for (i = 0; i <= len; i++) {
        if (str[i] != ' ' && str[i] != '\0') {
            wlen++;
        } else {
            if (wlen > max_wlen) {
                max_wlen = wlen;
                index = i - max_wlen;
            }
            wlen = 0;
        }
    }

    strncpy(longest_str, str + index, max_wlen);
    longest_str[max_wlen] = '\0';

    printf("Longest word: %s\n", longest_str);
    printf("Length: %d\n", max_wlen);

    return 0;
}

