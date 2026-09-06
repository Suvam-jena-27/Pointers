#include <stdio.h>

/*2. Pointers as fxn. arg.*/

void increase(int *p){
    *p = *p + 1;
}

int main(){
    int a = 10;
    increase(&a);
    printf("a = %d\n", a);

    return 0;
}