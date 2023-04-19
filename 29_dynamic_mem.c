#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int i;
    scanf("%d", &i);
    char* p;
    p = (char*) malloc(i);
    strcpy(p, "malloc succee");
    puts(p);
    free(p); //释放空间,p的值必须和最初malloc返回的值一致
    //当一个指针指向的空间并不是属于该指针能应用的空间的时候
    //这个指针就是也指针
    p =NULL;//如果FREE之后不把指针置为NULL,我们就称这个指针是野指针

    return 0;
}

