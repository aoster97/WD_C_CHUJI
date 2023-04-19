#include <stdio.h>
#include <stdlib.h>

void modifynum(int *p) {
    ++(*p);
}

void allocateMemory(int **p) {//二级指针传入的就是指针的地址,所以传入指针的地址就好
    *p = (int *) malloc(20);//传入的应该是指针的内容,所以需要解引用
    (*p)[0] = 5;
}


int main() {
    int a = 10;
    int *p;
    int *b;

    p = &a;
    modifynum(p);
    printf("a = %d\n", a);

    allocateMemory(&b);
    printf("c[0] = %d\n", b[0]);

    return 0;
}