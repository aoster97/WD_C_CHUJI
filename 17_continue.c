#include <stdio.h>

int main() {
    // 奇数和偶数的求和
    int count;
    int sum;
    for (count = 1, sum = 0; count < 100; count++) {
        if (count % 2 == 0) {
            sum += count;
        }
    }

    printf("even_sum = %d\n", sum);

    //odd奇数求和
    for (count = 1, sum = 0; count < 100; count++) {
        if (count % 2 == 0) {
            continue;
        }
        sum += count;
    }
    printf("odd_sum = %d\n", sum);

    return 0;
}

