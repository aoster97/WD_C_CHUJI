#include <stdio.h>

int main() {
    printf("name = %s,age = %d,sex = %c, score = %5.2f\n","longge", 34,'c',98.5);
    printf("name = %s,age = %3d,sex = %c, score = %4.1f\n","longge", 34,'c',98.5);
    printf("name = %s,age = %-3d,sex = %c, score = %f\n","longge", 34,'c',98.5);
}

