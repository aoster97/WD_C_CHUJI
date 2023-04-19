#include <stdio.h>
#include <stdlib.h>

typedef struct student {
    int num;
    char name[20];
    char sex;
} stu, *pstu;

typedef int INTEGER;

int main() {
    stu s = {1001, "lili", 'm'};
    pstu p;
    INTEGER i = 10;
    p = &s;
    printf("i = %d , p->num = %d\n", i, p->num);


    return 0;
}

