#include <stdio.h>
#include <stdlib.h>

struct student {
    int num; //数据项我们把它称为成员
    char name[20];
    char sex;
    int age;
    float score;
    char addr[30];
};//结构体类型声明,注意最后一定要加分号

int main() {
    struct student s = {1001, "lele", 'm', 26, 71.22, "浦东新区"}; //初始化
    struct student sarr[3];
    int i;
    printf("%d , %s , %c , %d , %5.2f , %s \n", s.num, s.name, s.sex, s.age, s.score, s.addr);
    for (i = 0; i < 3; i++) {
        scanf("%d%s %c%d%f%s", &sarr[i].num, sarr[i].name, &sarr[i].sex, &sarr[i].age, &sarr[i].score, sarr[i].addr);
    }
    //结构体数组
    for (i = 0; i < 3; i++) {
        printf("%d %s %c %d %f %s\n", sarr[i].num, sarr[i].name, sarr[i].sex, sarr[i].age, sarr[i].score, sarr[i].addr);
    }

    return 0;
}

