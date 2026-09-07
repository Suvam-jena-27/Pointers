#include <stdio.h>
#include <string.h>

/*7. Character pointers*/

void print(const char* C){  //const makes sure, fxn is only read-only type

    while(*C != '\0'){      //derefence the pointer the check NULL
        printf("%c", *C);
        C++;                //incrementing the pointer directly
    }
    printf("\n");
}

int main(){

    char C[20] = "Hello";
    char *c = "Hello";      //string stored as compile time constant
    print(C);
    print(c);
    c[0] = 'W';
    print(c);               //nothing will be printed, as we cant change this
   
    return 0;
}