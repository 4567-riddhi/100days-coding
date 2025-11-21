#include <stdio.h>

enum Gender { MALE, FEMALE };
struct Person {
    enum Gender gender;
};

int main() {
    struct Person p;
    p.gender = MALE;
    if (p.gender == MALE) {
        printf("Male\n");
    } else {
        printf("Female\n");
    }
    return 0;
}
