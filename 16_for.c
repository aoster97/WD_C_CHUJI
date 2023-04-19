#include <stdio.h>

int main() {
    int sum;
    int i;

//    for (i = 1; i <= 100;  i++){
//        sum += i;
//    }
    //我们也可以全部初始化的工作,用逗号表达式的形式放到第一个表达式的位置
    for (i = 1, sum = 0; i <= 100; i++) {
        sum += i;
    }

    printf("%d", sum);

    return 0;
}

