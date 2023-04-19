/*
#include <stdio.h>

//把&写到形参的位置是cpp的语法,称为引用
void modifynum(int &b) {// cpp引用应用本质上是调用指针来完成的，但是由于封装，所以他跟main函数中的操作方法是一样的
    b += 1;
}

int main() {
    int a = 10;
    modifynum(a);
    printf("a = %d\n", a);
    return 0;
}
 */




#include <stdio.h>

void modifynum(int *p) {
    ++(*p);
}

int main() {
    int i = 10;
    int *p;
    int **z;
    p = &i;
    z = p;
    modifynum(p);
    printf("i = %d\n", i);
    printf("p的地址是%x",z);
    return 0;
}

