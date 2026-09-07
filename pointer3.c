#include <stdio.h>

/*2. Pointers as fxn. arg.*/

void increase(int *p){
    *p = *p + 1;
}

int main(){
    int a = 10;
    printf("Before Increment: ");
    printf("a = %d\n", a);

    increase(&a);
    printf("After Increment: ");
    printf("a = %d\n", a);
    
    printf("Increment by 3: ");
    for(int i=0; i<3; i++){
        increase(&a);
    }
    printf("a = %d\n", a);

    return 0;
}