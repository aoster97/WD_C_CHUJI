#include <stdio.h>

void charge(int *j) {
    *j = 5;
}
//值传递
int main() {
    int i = 10; 
    printf("before charge i = %d\n", i);
    charge(&i);
    printf("after charge i = %d\n", i);
    return 0;
}

