#include <stdio.h>

int isAnagram(char s[], char t[]) {
    int count[26] = {0};  

    for (int i = 0; s[i] != '\0'; i++)
        count[s[i] - 'a']++;

    for (int i = 0; t[i] != '\0'; i++)
        count[t[i] - 'a']--;

    for (int i = 0; i < 26; i++)
        if (count[i] != 0)
            return 0;
    return 1;
}

int main() {
    char s[] = "anagram";
    char t[] = "nagaram";

    if (isAnagram(s, t))
        printf("Anagram\n");
    else
        printf("Not Anagram\n");

    return 0;
}
