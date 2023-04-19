#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *print_stack() {
    char c[] = "i am print_stack";
    puts(c);
    return c;
}

char *print_malloc() {
    char *p;
    p = (char *) malloc(20);
    strcpy(p, "I am print_malloc");
    puts(p);
    return p;
}

int main() {
    char *p;
    p =  print_stack();
    puts(p);
    //这个函数不能运行成功,因为main函数在栈空间里,调用的函数也在栈空间里,当函数运行完就会释放空间,导致数据被污染
    p = print_malloc();
    puts(p);

    return 0;
}

