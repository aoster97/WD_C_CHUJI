#include <stdio.h>

void print(char c[]) {
    int i = 0;
    while (c[i]) {
        //在函数中还可以
        printf("%c", c[i]);
        i++;
    }
}

int main() {
    char a[20];
    scanf("%s", &a[0]);
    print(a);
    return 0;
}

