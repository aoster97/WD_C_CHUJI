#include <stdio.h>

int main() {
    int a = 5; //指针的本质就是地址,(二级指针要与c++的引用进行对比 )
    int* p = &a;
    printf("i=%d\n",a);
    printf("*p = %d\n",*p);  //直接访问
    printf("p = %x\n",p); //间接访问

    //声明3个指针变量
    int *b,*c,*d;

    return 0;

}

