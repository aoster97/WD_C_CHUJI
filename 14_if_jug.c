#include <stdio.h>

int main() {
    int i;
    while (scanf("%d", &i) != EOF) {
        if (i > 0) {
            printf("this is bigger than 0\n");
        }else{
            printf("this is not bigger than 0");
        }
    }

    //错误一:
    while (scanf("%d", &i) != EOF)
    {
        //if (i > 0);

        //if后面加上;就可以导致无论if条件正确与否,都会运行后面的语句
        //如果不加大括号,就默认if后面的一条语句是执行语句
        {
            printf("this is bigger than 0\n");
        }
//        else{
//            printf("this is not bigger than 0");
//        }
    }

    return 0;
}

