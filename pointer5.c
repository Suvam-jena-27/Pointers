#include <stdio.h>

/*5. Arrays as fxn. arg.*/

int SOE(int A[], int n){    //A array in passed by reference here
    int i;                  //Hence, the sizeof(A) in SOE() is 4 bytes
    int sum = 0;
    
    for(i = 0; i < n; i++){
        sum += A[i];        //interpreted as *(A+i)
    }
    return sum;
}

int main(){
    int A[] = {1, 2, 3, 4, 5};
    int size = sizeof(A)/sizeof(A[0]);  //the sizeof(A) in main() is 20 bytes
    int total = SOE(A, size);           //SOE(&A[0], size);

    printf("Sum of element: %d\n", total);
    return 0;
}