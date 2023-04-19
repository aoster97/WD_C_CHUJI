#include <stdio.h>

int main() {
    int a = 5;
    float b = a / 2; //先是整形运算,运算完以后才转换成浮点
    printf("%f\n",b);
    float c = (float)a / 2; //÷前面的表达式就是浮点运算
    printf("%f", c);
    return 0;
}

