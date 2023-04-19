#include <stdio.h>

void print(int b[], int len) {
    int i;
    for (i = 0; i < len; i++)
        //for (i = 0; i < sizeof(a)/sizeof(int); i++)是不可以的,因为数组作为参数,传递的是数组的起始位置,元素的个数时候传递不过去的
    {
        printf("%3d", b[i]);
    }
    //在子函数中修改数组的元素
    b[4] = 20;
}

int main() {
    int j = 10;
    int a[5] = {0, 1, 2, 3, 4};
    int i = 3;
    // //实际上已经访问越界了
    // a[5] = 20;
    // a[6] = 21;
    // a[7] = 22;
    print(a, 5);

    printf("%d\n", a[4]);
    return 0;
}

