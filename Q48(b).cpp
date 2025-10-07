//Reverse each word in a sentence without changing the word order.
#include <stdio.h>
#include <string.h>


void reverse(char *begin, char *end) {
    char temp;
    while (begin < end) {
        temp = *begin;
        *begin++ = *end;
        *end-- = temp;
    }
}

void reverseWordsInSentence(char *str) {
    char *word_start = NULL;
    char *temp = str;

    while (*temp) {
        if ((word_start == NULL) && (*temp != ' ')) {
            word_start = temp;
        }
        if (word_start && (*(temp + 1) == ' ' || *(temp + 1) == '\0')) {
            reverse(word_start, temp);
            word_start = NULL;
        }
        temp++;
    }
}

int main() {
    char str[] = "Hello World in C Language";
    reverseWordsInSentence(str);
    printf("%s\n", str); 
    return 0;
}

