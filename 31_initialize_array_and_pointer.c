#include <stdio.h>

int main() {
    char *p = "hello"; //p是一个变量,意在将字符串常量的地址赋值给p,所以指针指向的内容是不可以改变的
    char a[10] = "hello"; //a本就是一个在栈内的地址
    a[0] = 'H';
    p[0] = 'H';
    printf("c[0] = %c\n", a[0]);
    printf("p[0] = %c\n", p[0]);
    //a = "hello"; 数组名并不是一个变量,他是栈空间内开辟的一条空间,而字符串常量存储在数据区(字符串常量区),
    p = "hello";
    return 0;
}

