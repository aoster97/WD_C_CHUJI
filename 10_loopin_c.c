#include <stdio.h>

int main() {

    char c;
    while (scanf("%c",&c) != EOF)  //rewind主要使用在读整型数或者读浮点数
    {
        if (c != '\n'){
            c -= 32;
            printf("%c",c);
        }else{
            printf("\n");
        }
    }
    return 0;
}

