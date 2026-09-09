#include <stdio.h>

/*2. Pointers and Multi-dimensional arrays*/

int main(){
    int B[][3] = {{2, 3, 6}, {4, 5, 8}};
    int (*p)[3] = B;
    printf("%d %d %d %d\n", B, B[0], *B, *(B[0]));
    printf("%d %d %d %d %d\n", p, p[0], *p, *(p[0]), p[1][2]);
    printf("\n");
    printf("Address of B: %d\n", B);
    printf("Address of (B+1): %d (Plus 12 Bytes)\n", B+1);
    printf("Value at *(B+1): %d\n", *(B+1));
    printf("Value at *(B+1)+2: %d\n", *(B+1)+2);
    printf("Value at *(*B+1): %d\n", *(*B+1));  //Tough one    
    return 0;
}