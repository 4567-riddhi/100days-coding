#include <stdio.h>

int main() {
    char name[100];
    int i = 0;
    scanf("%[^\n]", name);

    if (name[0] != ' ')
        printf("%c.", name[0]);

    while (name[i] != '\0') {
        if (name[i] == ' ' && name[i + 1] != ' ' && name[i + 1] != '\0')
            printf("%c.", name[i + 1]);
        i++;
    }
    return 0;
}
