#include <stdio.h>

/*4. Arrays as fxn. arg.*/

int SOE(int A[], int n){
    int i;
    int sum = 0;
    
    for(i = 0; i < n; i++){
        sum += A[i];
    }
    return sum;
}

int main(){
    int A[] = {1, 2, 3, 4, 5};
    int size = sizeof(A)/sizeof(A[0]);
    int total = SOE(A, size);

    printf("Sum of element: %d\n", total);
    return 0;
}