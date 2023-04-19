#include <stdio.h>

int main() {
    int a = 4 +5 * 2 -6 / 3 + 11  % 4;
    printf("%d\n", a);
    scanf("%d", &a);
    printf("a=%d\n", a);

    //如果输入的是1234,怎么才能输出4321
    while(a != 0){
        printf("%d", a%10);
        a /= 10;
    }
    printf("\n");
    return 0;
}

