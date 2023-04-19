#include <stdio.h>


void swap(int *pInt, int *pInt1);

int main() {
    int a = 100;
    int b = 200;
    int *pa, *pb;
    pa = &a;
    pb = &b;
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    swap(pa, pb);
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}

void swap(int *pInt1, int *pInt2) {
    int temp;
    temp = *pInt1;
    *pInt1 = *pInt2;
    *pInt2 = temp;

}

