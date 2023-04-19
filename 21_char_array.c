#include <stdio.h>

int main() {
    //字符数组和整型数组的不太一样,不需要初始化
    char a[6] = {'h', 'e', 'l', 'l', 'o'};
    //初始化的其他方式
    char b[6] = "hello";
    printf("%s----%s\n", a, b);//字符串的末未结束是\0,所以当需要定义字符数组的时候,长度应该是字符长度 + 1
    //使用字符数组存储scanf输入的内容
    char c[20], f[20];
    //整型数组必须初始化,字符型数组不一定需要初始化
    scanf("%s%s", c, f);
    printf("%s---%s\n", c, f);
    return 0;
}

