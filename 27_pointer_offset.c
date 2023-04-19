#include <stdio.h>

#define N 5

int main() {
    int a[N] = {1, 2, 3, 4, 5};
    int *p; //对一个指针变量进行取值,得到的类型是其基本类型
    int i;
    p = a;
    printf("%d\n", *p);
    //指针在数值上+1,其实是加了一个基类型的类型大小
    //使用指针读取数组
    for (i = 0; i < N; ++i) {
        printf("%-2d", *(p + i));
    }
    return 0;
}

