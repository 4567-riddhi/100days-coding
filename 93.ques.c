#include <stdio.h>
int getLength(char str[]) {
    int i = 0;
    while (str[i] != '\0') {
        i++;
    }
    return i;
}
int sameLetters(char str1[], char str2[]) {
    int count[26] = {0};
    int i;

    int len1 = getLength(str1);
    int len2 = getLength(str2);

    if (len1 != len2)
        return 0;

    for (i = 0; i < len1; i++) {
        count[str1[i] - 'a']++;  
        count[str2[i] - 'a']--;  
    }
    for (i = 0; i < 26; i++) {
        if (count[i] != 0)
            return 0;
    }

    return 1;
}

int main() {
    char word1[100], word2[100];

    printf("Enter first word: ");
    scanf("%s", word1);

    printf("Enter second word: ");
    scanf("%s", word2);

    if (sameLetters(word1, word2))
        printf("Same letters\n");
    else
        printf("Different letters\n");

    return 0;
}
