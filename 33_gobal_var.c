#include <stdio.h>

int i = 10;

void print(int i) { //int a
    printf("print = %d\n", i);
}

int main() {

    printf("main = %d\n", i);
    //i = 5;
    int i = 5;//
    print(i);
    printf("main = %d\n", i);
    return 0;
}

