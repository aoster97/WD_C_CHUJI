#include <stdio.h>
#include <string.h>

int main() {
    char a[20] = "hello";
    printf("%d\n", sizeof(a));

    int b[5] = {1, 2, 3, 4, 5};
    printf("%d\n", sizeof(b));
    //strlen(a);
    printf("数组a中的字符串的长度是 = %d\n", strlen(a));

    char d[20];
    strcpy(d, a);
    printf("%s\n", d);
    strcpy(d, "zzzzzzzzzzzzz");
    printf("%s\n", d);

    //strcmp
    printf("两个字符串比较之后的结果 = %d\n",strcmp("hollo","hello"));
    printf("两个字符串比较之后的结果 = %d\n",strcmp("hello","hello"));
    printf("两个字符串比较之后的结果 = %d\n",strcmp("holloo","hello"));
    printf("两个字符串比较之后的结果 = %d\n",strcmp("hollo","helloo"));
    printf("两个字符串比较之后的结果 = %d\n",strcmp("hallo","helloo"));
    //从上面的结果可以看出,两个字符的比较,对比的不是字符的长度而是对应字符位置的ascii码值


    //strcat
    strcat(a,d);
    //机制是将字符d拼接到字符a中.所以需要注意a的字符数组长度
    printf("%s\n",a);

    return 0;
}

