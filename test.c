#include <stdio.h>
#include <string.h>

int main() {
    char c[10];
    strcpy(c, "hello");
    char *p;
    p = c;
    for (int i = 0; i < strlen(c); ++i) {
        printf("%c", *(p + i));
    }

    return 0;
}

