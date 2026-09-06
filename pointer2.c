#include <stdio.h>

/*2. Pointers to Pointers*/

int main(){
    int x = 5;
    int* p = &x;    //address of x in p
    *p = 6;         //dereferencing p and changing its value
    int** q = &p;   //int pointer q for storing address of int pointer p
    int*** r = &q;  //r pointer to int pointer q

    printf("%d\n", *p); //value at address in p, deref. to (x=6)
    printf("%d\n", *q); //value at address in q, deref. to (address of x)
    printf("%d\n", *(*q));  //double deref. q, also, **q works, (x=6)
    ***r = 10;          //changing value at x=6 to x=10
    printf("%d\n", x);  //triple deref., reaching till, (x=10)
    **q = *p + 2;       //assigning the value (*p+2) to the **q=x=(10+2)
    printf("%d\n", x);  //value: 12

    return 0;
}