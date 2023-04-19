#include <stdio.h>

int main() {
    // 从1~100求和,大于2000的时候终止循环
    int count;
    int sum;

    for (count = 1, sum = 0; count <= 100; count++) {
        sum += count;
        if (sum > 2000) {
            break;
        }
    }

    printf("sum = %d , count = %d", sum ,count);
    return 0;
}

