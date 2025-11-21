#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *in, *out;
    char ch;

    in = fopen("input.txt", "r");
    out = fopen("output.txt", "w");

    if (in == NULL || out == NULL) {
        printf("Error opening files!\n");
        return 1;
    }
    
    while ((ch = fgetc(in)) != EOF) {
        fputc(toupper(ch), out);
    }

    fclose(in);
    fclose(out);
    printf("File converted successfully to uppercase in output.txt\n");
    return 0;
}
