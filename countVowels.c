#include <stdio.h>
#include <ctype.h>

int isVowel(char c) {
    char lc = tolower(c);
    if (lc == 'a' || lc == 'e' || lc == 'i' || lc == 'o' || lc == 'u') return 1;
    return 0;
}

int countVowels(char *str) {
    if (*str == '\0') return 0;
    return isVowel(*str) + countVowels(str + 1);
}

int main() {
    char *text = "HellO";
    int count = countVowels(text);
    printf("%d\n", count);
}