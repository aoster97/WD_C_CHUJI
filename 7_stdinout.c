#include <stdio.h>

int main() {
    int i,j;
    char c;
    scanf("%d",&i);
    printf("i = %d\n",i);

    scanf("%c",&c);
    printf("c = %d\n",c);
    /*
    out:
    10
    i = 10
    c = 10
    scanf将数据 放到了标准缓冲区,输入回车换行键之后才会进行I/O操作 如果读入的是%d %f %s 的话,scanf就会忽略换行和回车

     */

    //scanf("%d",&j);
    //printf("j = %d\n",j);

    return 0;
}

