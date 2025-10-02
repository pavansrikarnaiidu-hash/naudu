//Reverse a string.
#include <stdio.h>
#include <string.h>

void reverse(char* str) {
    int left = 0;
    int right = strlen(str) - 1;
    char temp;
    while (left < right) {
        temp = str[left];
        str[left] = str[right];
        str[right] = temp;
        left++;
        right--;
    }
}

int main() {
    char str[100] = "abcde";
    reverse(str);
    printf("%s", str);
    return 0;
}

