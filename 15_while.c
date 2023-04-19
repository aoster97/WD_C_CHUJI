#include <stdio.h>

int main() {
    //从1加到100
    int sum = 0;
    int cont = 1;
    while (cont <= 100) {
        sum += cont;

        cont++;
    }
    printf("%d\n", sum);
    return 0;
}

