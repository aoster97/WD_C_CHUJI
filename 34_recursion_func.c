#include <stdio.h>

int factorial(int a) {
    if (a == 1) {
        return 1;
    }
    return a * factorial(a - 1);
}


int main() {
    int result;
    result = factorial(4);

    printf("%d\n", result);

    return 0;
}

