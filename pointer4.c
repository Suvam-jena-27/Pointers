#include <stdio.h>

/*3. Pointers and Arrays*/

int main(){
    int A[5] = {2, 4, 5, 8, 1};
    int* p = A;     //Assigning array to a pointer

    printf("Address of A[0] or A = %d\n", p);   //or &A[0]
    printf("Value at A[0] = %d\n", *p);
    
    printf("Address of A[1] = %d\n", p+1);
    printf("Value at A[1] = %d\n", *(p+1));
    
    printf("Address of A[0] or A = %d\n", A);   //Address of A = A[0]
    printf("Value at A[0] = %d\n", *A);

    printf("Address of A[0] or A = %d\n", A+1); //Address at A+1
    printf("Value at A[0] = %d\n", *(A+1));
    //The array name acts as a pointer itself
    
    for(int i=0; i<5; i++){
        printf("Address of A[%d] = %d\n", i, &A[i]);
        printf("Value = %d\n", *(A+i));
    }
    
    return 0;
}