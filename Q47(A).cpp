//Check if two strings are anagrams of each other
#include <stdio.h>
#include <string.h>

int anagram(char *s1, char *s2) {
    int c1[256] = {0}, c2[256] = {0};
    int i = 0;
    while (s1[i]) c1[(unsigned char)s1[i++]]++;
    i = 0;
    while (s2[i]) c2[(unsigned char)s2[i++]]++;
    for (i = 0; i < 256; i++) {
        if (c1[i] != c2[i]) return 0;
    }
    return 1;
}

int main() {
    char s1[] = "listen";
    char s2[] = "silent";
    if (anagram(s1, s2))
        printf("Anagrams\n");
    else
        printf("Not Anagrams\n");
    return 0;
}

