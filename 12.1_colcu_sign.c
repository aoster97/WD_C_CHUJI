#include <stdio.h>

int main() {
    int i ,g;
    scanf("%d", &i);

    while (i != 0) {
        g  = i % 10;
        printf("%c", g + 48);// 数字变成字符只用在数字上面加上48 就可以将整型变成字符
        i /= 10;
    }
    printf("\n");
    return 0;
}

