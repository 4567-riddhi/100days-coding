#include <stdio.h>
#include <string.h>

int longestUniqueSubstring(char s[]) {
    int maxLen = 0;
    int start = 0;
    int visited[256];  
    for (int i = 0; i < 256; i++)
        visited[i] = -1;

    for (int i = 0; s[i] != '\0'; i++) {
        if (visited[s[i]] >= start)
            start = visited[s[i]] + 1;

        visited[s[i]] = i;

        int currentLen = i - start + 1;
        if (currentLen > maxLen)
            maxLen = currentLen;
    }

    return maxLen;
}
int main() {
    char s[] = "abcabcbb";  
    int result = longestUniqueSubstring(s);
    printf("%d\n", result); 
    return 0;
}
