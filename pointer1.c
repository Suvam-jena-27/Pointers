#include <stdio.h>

/* 1. Pointers*/

int main(){
    int a = 1025;
    int* p = &a;

    //pointers arithematic
    //printf("p =%d\n", p);
    //printf("p+1 =%d\n", p+1);
    printf("Size of int: %d\n", sizeof(int));
    printf("Adress: %d\nValue: %d\n", (p), *(p));
    char* p1 = (char*)p;    //typecasting p here
    printf("Size of char: %d\n", sizeof(char));
    printf("Adress: %d\nValue: %d\n", (p1+1), *(p1+1));
    //value in char is 4 because,
    //1025 = 00000000 00000000 00000100 00000001
    //leftmost byte in picked up when seen as character *p1
    //but with *(p1+1), the pointer points to the next byte, with value 4
    //so, *(p1+1) = 4

    //Void Pointer
    void *p0;
    p0 = p;
    printf("Address: %d\n", p0);
    //printf("value: %d \n", *p0);   defrencing void in not possible
    printf("Address: %d", p0+1);    //can interact with void addresses though

    return 0;
}